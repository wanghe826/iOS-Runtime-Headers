/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class <DOMEventTarget>;

@interface DOMGestureEvent : DOMUIEvent {
}

@property(readonly) bool altKey;
@property(readonly) bool ctrlKey;
@property(readonly) bool metaKey;
@property(readonly) float rotation;
@property(readonly) float scale;
@property(readonly) bool shiftKey;
@property(readonly) <DOMEventTarget> * target;

- (bool)altKey;
- (bool)ctrlKey;
- (void)initGestureEvent:(id)arg1 canBubble:(bool)arg2 cancelable:(bool)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(bool)arg10 altKey:(bool)arg11 shiftKey:(bool)arg12 metaKey:(bool)arg13 target:(id)arg14 scale:(float)arg15 rotation:(float)arg16;
- (bool)metaKey;
- (float)rotation;
- (float)scale;
- (bool)shiftKey;
- (id)target;

@end
