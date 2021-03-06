/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassGroupView, UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    UIPanGestureRecognizer *_gestureRecognizer;
    _UIDynamicValueAnimation *_panningAnimation;
    PKPassGroupView *_panningGroupView;
    } _panningViewStartPosition;
    } _panningViewTargetPosition;
    double _panningViewTargetScale;
}

@property(retain) UIPanGestureRecognizer * gestureRecognizer;
@property(retain) PKPassGroupView * panningGroupView;
@property struct CGPoint { double x1; double x2; } panningViewStartPosition;
@property struct CGPoint { double x1; double x2; } panningViewTargetPosition;
@property double panningViewTargetScale;

- (id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3;
- (void)dealloc;
- (void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(id)arg2 completion:(id)arg3;
- (id)gestureRecognizer;
- (id)initWithGroupView:(id)arg1;
- (void)layoutViewsWithY:(double)arg1;
- (id)panningGroupView;
- (struct CGPoint { double x1; double x2; })panningViewStartPosition;
- (struct CGPoint { double x1; double x2; })panningViewTargetPosition;
- (double)panningViewTargetScale;
- (void)setGestureRecognizer:(id)arg1;
- (void)setPanningGroupView:(id)arg1;
- (void)setPanningViewStartPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanningViewTargetPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanningViewTargetScale:(double)arg1;
- (void)stop;

@end
