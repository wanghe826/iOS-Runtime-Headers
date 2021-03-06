/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallModel : NSObject {
    int _ambiguityState;
    bool_addCallAllowed;
    bool_ambiguous;
    bool_endAndAnswerAllowed;
    bool_hardPauseAvailable;
    bool_holdAllowed;
    bool_holdAndAnswerAllowed;
    bool_mergeable;
    bool_sendToVoicemailAllowed;
    bool_swappable;
    bool_takingCallsPrivateAllowed;
}

@property(getter=isAddCallAllowed,readonly) bool addCallAllowed;
@property(readonly) int ambiguityState;
@property(getter=isAmbiguous,readonly) bool ambiguous;
@property(getter=isEndAndAnswerAllowed,readonly) bool endAndAnswerAllowed;
@property(getter=isHardPauseAvailable,readonly) bool hardPauseAvailable;
@property(getter=isHoldAllowed,readonly) bool holdAllowed;
@property(getter=isHoldAndAnswerAllowed,readonly) bool holdAndAnswerAllowed;
@property(getter=isMergeable,readonly) bool mergeable;
@property(getter=isSendToVoicemailAllowed,readonly) bool sendToVoicemailAllowed;
@property(getter=isSwappable,readonly) bool swappable;
@property(getter=isTakingCallsPrivateAllowed,readonly) bool takingCallsPrivateAllowed;

+ (id)sharedInstance;

- (int)ambiguityState;
- (id)description;
- (bool)isAddCallAllowed;
- (bool)isAmbiguous;
- (bool)isEndAndAnswerAllowed;
- (bool)isHardPauseAvailable;
- (bool)isHoldAllowed;
- (bool)isHoldAndAnswerAllowed;
- (bool)isMergeable;
- (bool)isSendToVoicemailAllowed;
- (bool)isSwappable;
- (bool)isTakingCallsPrivateAllowed;

@end
