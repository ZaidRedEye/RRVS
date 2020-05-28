//
//  AppDelegate.swift
//  RyuNUApp
//
//  Created by Wyatt Mufson on 6/19/19.
//  Copyright © 2019 Ryu Blockchain Technologies. All rights reserved.
//

import UIKit
import Ryu

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {

    var window: UIWindow?

    var application: UIApplication?

    @objc var currentUnityController: UnityAppController!

    var isUnityRunning = false
    var unityScene: String = ""

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        self.application = application
        unity_init(CommandLine.argc, CommandLine.unsafeArgv)

        self.currentUnityController = UnityAppController()
        self.currentUnityController.application(application, didFinishLaunchingWithOptions: launchOptions)
        startUnity(isInitialLaunch: true)
        stopUnity()

        let config = RDCConfig(gameId: "G158ROCKET7366670", apiKey: "A1585203343607")
        config.noGameTutorial = true;
        config.noCache = true;
        #if !DEBUG
        config.isDebug = false
        #else
        config.offlineOptions = [];
        config.offlineOptions.append(OfflineOption(id: "dash_test", title: "1500m Sprint", gameMode: "DASH", rules: ["Reach 1500m as fast as possible."], boxColor: "#E74C3C", textColor: "#FFFFFF", buttonColor: "#F1C40F", buttonTextColor: "#2C3E50"))
        config.offlineOptions.append(OfflineOption(id: "timed_test", title: "Time Attack", gameMode: "TIMED", rules: ["Travel as far as possible under 30s."], boxColor: "#1F618D", textColor: "#FFFFFF", buttonColor: "#F1C40F", buttonTextColor: "#2C3E50"))
        #endif
        rdcStart(config: config)

        return true
    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
        if isUnityRunning && !isSubmittingScoreFromUnity {
            currentUnityController.applicationWillResignActive(application)
        }
    }

    func applicationDidEnterBackground(_ application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
        if isUnityRunning && !isSubmittingScoreFromUnity {
            currentUnityController.applicationDidEnterBackground(application)
        }
        rdcStop()
    }

    func applicationWillEnterForeground(_ application: UIApplication) {
        // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
        if isUnityRunning {
            currentUnityController.applicationWillEnterForeground(application)
        }
        rdcResume()
    }

    func applicationDidBecomeActive(_ application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
        if isUnityRunning {
            currentUnityController.applicationDidBecomeActive(application)
        }
    }

    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }

    func application(_ application: UIApplication, didRegisterForRemoteNotificationsWithDeviceToken deviceToken: Data) {
        rdcStoreToken(deviceToken: deviceToken)
    }

    func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
        rdcSignInFromURL(url, self)
        return false
    }

    func startUnity(isInitialLaunch: Bool) {
        if !isUnityRunning {
            isUnityRunning = true
            if isInitialLaunch {
                currentUnityController.startUnity(application!)
            } else {
                currentUnityController.applicationDidBecomeActive(application!)
            }
        }
    }

    func stopUnity() {
        if isUnityRunning {
            currentUnityController.applicationWillResignActive(application!)
            isUnityRunning = false
        }
    }
}
