/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@class MCDButton;

@interface MCDPlayModeControlView : UIView {
    MCDButton *_geniusButton;
    MCDButton *_repeatButton;
    MCDButton *_shuffleButton;
    bool_creatingGenius;
}

@property bool creatingGenius;
@property(readonly) MCDButton * geniusButton;
@property(readonly) MCDButton * repeatButton;
@property(readonly) MCDButton * shuffleButton;

- (void).cxx_destruct;
- (bool)creatingGenius;
- (id)geniusButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)repeatButton;
- (void)setCreatingGenius:(bool)arg1;
- (id)shuffleButton;

@end
