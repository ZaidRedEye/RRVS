//
//  GameViewController.swift
//  RyuNUApp
//
//  Created by Wyatt Mufson on 6/19/19.
//  Copyright © 2019 Ryu Blockchain Technologies. All rights reserved.
//

import UIKit
import Ryu

internal var isSubmittingScoreFromUnity = false

class GameViewController: UIViewController {

    let appDelegate = UIApplication.shared.delegate as! AppDelegate
    let submit = NSNotification.Name("SubmitScore")
    let exit = NSNotification.Name("ExitGame")

    override var prefersStatusBarHidden: Bool {
        return true
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .black
        addUnityView()
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        // Do any additional setup after loading the view.
        if let vcs = self.navigationController?.viewControllers {
            if vcs[vcs.count - 1].isKind(of: GameViewController.self) && vcs[vcs.count - 2].isKind(of: GameViewController.self)  {
                self.navigationController?.viewControllers.remove(at: vcs.count - 2)
                appDelegate.startUnity(isInitialLaunch: false)
                NotificationCenter.default.addObserver(self, selector: #selector(submitScore(_:)), name: submit, object: nil)
                NotificationCenter.default.addObserver(self, selector: #selector(exitGame), name: exit, object: nil)
                return
            }
        }
        
        appDelegate.startUnity(isInitialLaunch: false)
        refresh()
        NotificationCenter.default.addObserver(self, selector: #selector(submitScore(_:)), name: submit, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(exitGame), name: exit, object: nil)
    }

    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        appDelegate.stopUnity()
        NotificationCenter.default.removeObserver(self, name: submit, object: nil)
        NotificationCenter.default.removeObserver(self, name: exit, object: nil)
    }

    private func refresh() {
        // Edit this function to match your game
        UnitySendMessage("Manager", "OnEnterGameView", "Refreshing game...")
    }

    private func clearCache() {
        // Edit this function to match your game
        UnitySendMessage("Manager", "ClearCache", "Clearing cache...")
    }

    func addUnityView() {
        if let unityView = UnityGetGLView() {
            view.insertSubview(unityView, at: 0)
        }
    }

    @objc func submitScore(_ notification: NSNotification) {
        print("Submit score")
        if let score = notification.userInfo?["score"] as? Int, let isHighestWins = notification.userInfo?["isHighestWins"] as? Bool {
            isSubmittingScoreFromUnity = true
            let submissionType: RDCSubmissionType = isHighestWins ? RDCSubmissionType.highestWins : RDCSubmissionType.lowestWins
            rdcSubmitScore(self, score: score, nil, submissionType: submissionType) { (success) in
                isSubmittingScoreFromUnity = false
                if success {
                    self.clearCache()
                }
            }
        }
    }

    @objc func exitGame() {
        print("Exit game")
        rdcExitMatch(self)
    }
}
