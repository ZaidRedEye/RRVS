//
//  RyuInterfaceNative.swift
//  UnityBridge
//
//  Created by Wyatt Mufson on 6/19/19.
//  Copyright © 2019 Ryu Blockchain Technologies. All rights reserved.
//

import Foundation
import UIKit
import Ryu

@objc public class RyuInterfaceNative: NSObject {
    @objc static let shared = RyuInterfaceNative()

    @objc func emitMessage(_ message: NSString) {
        print(message)
    }

    @objc func submitScore(_ score: Int, _ isHighestWins: Bool = true) {
        NotificationCenter.default.post(name: Notification.Name("SubmitScore"), object: nil, userInfo: ["score": score, "isHighestWins": isHighestWins])
    }

    @objc func exitGame() {
        NotificationCenter.default.post(name: Notification.Name("ExitGame"), object: nil)
    }

    @objc func cacheInt(_ key: NSString, _ val: Int) {
        if !isRyuMatch { return }
        _ = rdcCachePut(key: key as String, obj: val)
    }

    @objc func getCacheInt(_ key: NSString) -> Int {
        if !isRyuMatch { return 0 }
        let val = rdcCacheGet(key: key as String, type: Int.self) ?? 0
        return val
    }

    @objc func cacheString(_ key: NSString, _ val: NSString) {
        if !isRyuMatch { return }
        _ = rdcCachePut(key: key as String, obj: val as String)
    }

    @objc func getCacheString(_ key: NSString) -> NSString {
        if !isRyuMatch { return "" }
        let val = rdcCacheGet(key: key as String, type: String.self) ?? ""
        return val as NSString
    }

    @objc func cacheDouble(_ key: NSString, _ val: Double) {
        if !isRyuMatch { return }
        _ = rdcCachePut(key: key as String, obj: val)
    }

    @objc func getCacheDouble(_ key: NSString) -> Double {
        if !isRyuMatch { return 0 }
        let val = rdcCacheGet(key: key as String, type: Double.self) ?? 0
        return val
    }

    @objc func cacheFloat(_ key: NSString, _ val: Float) {
        if !isRyuMatch { return }
        _ = rdcCachePut(key: key as String, obj: val)
    }

    @objc func getCacheFloat(_ key: NSString) -> Float {
        if !isRyuMatch { return 0 }
        let val = rdcCacheGet(key: key as String, type: Float.self) ?? 0
        return val
    }

    @objc func cacheBool(_ key: NSString, _ val: Bool) {
        if !isRyuMatch { return }
        _ = rdcCachePut(key: key as String, obj: val)
    }

    @objc func getCacheBool(_ key: NSString) -> Bool {
        if !isRyuMatch { return false }
        let val = rdcCacheGet(key: key as String, type: Bool.self) ?? false
        return val
    }

    @objc func clearCache(_ key: NSString) {
        if !isRyuMatch { return }
        rdcCacheDelete(key: key as String)
    }

    @objc func getIsTutorial() -> Bool {
        return isRyuTutorial
    }

    @objc func getRandomInt(_ from: Int, _ to: Int) -> Int {
        if !isRyuMatch { return 0 }
        return rdcGetRandomInt(min: from, max: to)
    }

    @objc func addProgressionEvent(_ progressionStatusString: String, _ progression01: String, _ progression02: String, _ progression03: String) {
        //  Undefined = 0,
        //  Start = 1,
        //  Complete = 2,
        //  Fail = 3

        var progressionstatus: GAProgressionStatus = GAProgressionStatus.init(0)
        switch progressionStatusString {
        case "Start":
            progressionstatus = GAProgressionStatus.init(1)
        case "Complete":
            progressionstatus = GAProgressionStatus.init(2)
        case "Fail":
            progressionstatus = GAProgressionStatus.init(3)
        default:
            break
        }
        rdcGameAnalyticsManager.addProgressionEvent(with: progressionstatus, progression01: progression01, progression02: progression02, progression03: progression03)
    }

    @objc func addDesignEvent(_ eventId: String, _ value: Float) {
        if value == -1 {
            rdcGameAnalyticsManager.addDesignEvent(withEventId: eventId)
        } else {
            rdcGameAnalyticsManager.addDesignEvent(withEventId: eventId, NSNumber(value: value))
        }
    }

    @objc func facebookEvent(_ event: String, _ description: String) {
        rdcFacebookAnalyticsManager.logEvent(name: event, description: description)
    }

    @objc func getGameMode() -> NSString {
        if !isRyuMatch { return "NONE" as NSString }
        return rdcCurrentGameMode as NSString
    }
}
