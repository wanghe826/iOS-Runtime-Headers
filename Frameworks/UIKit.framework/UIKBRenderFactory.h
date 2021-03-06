/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSMutableArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject {
    UIKBRenderConfig *_renderConfig;
    double _rivenSizeFactor;
    double _scale;
    NSMutableArray *_segmentTraits;
    bool_boldTextEnabled;
    bool_lightweightFactory;
}

@property(readonly) bool boldTextEnabled;
@property bool lightweightFactory;
@property(readonly) UIKBRenderConfig * renderConfig;
@property double rivenSizeFactor;
@property double scale;
@property(readonly) NSArray * segmentTraits;

+ (bool)_enabled;
+ (long long)_graphicsQuality;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderConfig:(id)arg3;
+ (Class)factoryClassForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
+ (id)factoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 renderConfig:(id)arg2;
+ (id)lightweightFactoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 renderConfig:(id)arg2;
+ (id)segmentedControlColor:(bool)arg1;

- (double)RivenFactor:(double)arg1;
- (id)_controlKeyBackgroundColorName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)addLayoutSegment:(id)arg1;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (id)boldKeyImageName;
- (bool)boldTextEnabled;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyShadowColorName;
- (id)copyKeyImageName;
- (id)cutKeyImageName;
- (void)dealloc;
- (id)defaultKeyBackgroundColorName;
- (id)defaultKeyShadowColorName;
- (id)deleteKeyImageName;
- (id)dictationKeyImageName;
- (id)dismissKeyImageName;
- (id)displayContentsForKey:(id)arg1;
- (long long)enabledBlendForm;
- (id)extraPasscodePaddleTraits;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)handwritingMoreKeyImageName;
- (id)hashStringElement;
- (id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(bool)arg2;
- (double)keyCornerRadius;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (id)leftArrowKeyImageName;
- (long long)lightHighQualityEnabledBlendForm;
- (id)lightKeycapsFontName;
- (id)lightPadKeycapsFontName;
- (id)lightTextFontName;
- (bool)lightweightFactory;
- (void)lowQualityTraits:(id)arg1;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (id)passcodeControlKeyTraits;
- (double)passcodeEdgeWeight;
- (id)passcodeKeyEdgeColorName;
- (id)passcodeShiftedControlKeyTraits;
- (id)pasteKeyImageName;
- (void)removeAllLayoutSegments;
- (id)renderConfig;
- (id)rightArrowKeyImageName;
- (double)rivenSizeFactor;
- (double)scale;
- (void)scaleTraits:(id)arg1;
- (id)segmentTraits;
- (void)setLightweightFactory:(bool)arg1;
- (void)setRivenSizeFactor:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setupLayoutSegments;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (bool)shouldClearBaseDisplayStringForVariants;
- (double)skinnyKeyThreshold;
- (id)thinKeycapsFontName;
- (id)thinTextFontName;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 controlOpacities:(bool)arg3;
- (double)translucentGapWidth;
- (id)undoKeyImageName;
- (bool)useBlueThemingForKey:(id)arg1;

@end
