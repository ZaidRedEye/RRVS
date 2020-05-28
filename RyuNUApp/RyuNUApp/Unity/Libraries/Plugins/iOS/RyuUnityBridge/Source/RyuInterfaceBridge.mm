#import <UIKit/UIKit.h>
#include <RyuNUApp-Swift.h>
#include <string>

#pragma mark - C interface

extern "C" {
    void _ub_emitMessage(const char* characters) {
        NSString *message = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        [[RyuInterfaceNative shared] emitMessage: message];
    }

    void _ub_submitScore(int score, bool isHighestWins) {
        [[RyuInterfaceNative shared] submitScore: score :isHighestWins];
    }

    void _ub_exitGame() {
        [[RyuInterfaceNative shared] exitGame];
    }

    void _ub_cacheInt(const char* characters, int val) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        [[RyuInterfaceNative shared] cacheInt:key :val];
    }

    int _ub_getCacheInt(const char* characters) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        return int([[RyuInterfaceNative shared] getCacheInt: key]);
    }

    void _ub_cacheString(const char* characters, const char* characters2) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        NSString *val = [NSString stringWithCString: characters2 encoding: NSUTF8StringEncoding];
        [[RyuInterfaceNative shared] cacheString:key :val];
    }

    const char* _ub_getCacheString(const char* characters) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        return [[[RyuInterfaceNative shared] getCacheString: key] UTF8String];
    }

    void _ub_cacheDouble(const char* characters, double val) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        [[RyuInterfaceNative shared] cacheDouble:key :val];
    }

    double _ub_getCacheDouble(const char* characters) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        return [[RyuInterfaceNative shared] getCacheDouble: key];
    }

    void _ub_cacheFloat(const char* characters, float val) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        [[RyuInterfaceNative shared] cacheFloat:key :val];
    }

    float _ub_getCacheFloat(const char* characters) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        return [[RyuInterfaceNative shared] getCacheFloat: key];
    }

    void _ub_cacheBool(const char* characters, bool val) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        [[RyuInterfaceNative shared] cacheFloat:key :val];
    }

    bool _ub_getCacheBool(const char* characters) {
        NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
        return [[RyuInterfaceNative shared] getCacheBool: key];
    }

    void _ub_clearCache(const char* characters) {
      NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
      [[RyuInterfaceNative shared] clearCache: key];
    }

    bool _ub_getIsTutorial() {
        return [[RyuInterfaceNative shared] getIsTutorial];
    }

    int _ub_getRandomInt(int from, int to) {
      return (int)[[RyuInterfaceNative shared] getRandomInt:from :to];
    }

    void _ub_addProgressionEvent(const char* characters, const char* characters2, const char* characters3, const char* characters4) {
      NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
      NSString *key2 = [NSString stringWithCString: characters2 encoding: NSUTF8StringEncoding];
      NSString *key3 = [NSString stringWithCString: characters3 encoding: NSUTF8StringEncoding];
      NSString *key4 = [NSString stringWithCString: characters4 encoding: NSUTF8StringEncoding];
      [[RyuInterfaceNative shared] addProgressionEvent:key :key2 :key3 :key4];
    }

    void _ub_addDesignEvent(const char* characters, float val) {
      NSString *key = [NSString stringWithCString: characters encoding: NSUTF8StringEncoding];
      [[RyuInterfaceNative shared] addDesignEvent: key :val];
    }

    void _ub_facebookEvent(const char* charactersName, const char* charactersDescription) {
      NSString *name = [NSString stringWithCString: charactersName encoding: NSUTF8StringEncoding];
      NSString *description = [NSString stringWithCString: charactersDescription encoding: NSUTF8StringEncoding];
      [[RyuInterfaceNative shared] facebookEvent: name :description];
    }

    const char* _ub_getGameMode() {
        return [[[RyuInterfaceNative shared] getGameMode] UTF8String];
    }
}
