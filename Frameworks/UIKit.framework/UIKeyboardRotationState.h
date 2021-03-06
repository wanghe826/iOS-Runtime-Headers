/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIInputViewAnimationStyle;

@interface UIKeyboardRotationState : NSObject {
    UIInputViewAnimationStyle *_animationStyle;
    int _postRotationState;
    int _state;
    long long _targetOrientation;
    bool_requiresNewState;
}

@property(retain) UIInputViewAnimationStyle * animationStyle;
@property int postRotationState;
@property bool requiresNewState;
@property int state;
@property long long targetOrientation;

+ (id)stateWithState:(int)arg1 targetOrientation:(long long)arg2;

- (id)animationStyle;
- (void)dealloc;
- (int)postRotationState;
- (bool)requiresNewState;
- (void)setAnimationStyle:(id)arg1;
- (void)setPostRotationState:(int)arg1 animationStyle:(id)arg2;
- (void)setPostRotationState:(int)arg1;
- (void)setRequiresNewState:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTargetOrientation:(long long)arg1;
- (int)state;
- (long long)targetOrientation;

@end
