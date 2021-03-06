/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSLayoutManager, NSMutableArray, NSTextContainer, NSTextStorage, UITextView, UIView;

@interface _UISiriStreamingManager : NSObject {
    unsigned long long _firstIndexToRemoveAfterLineChangeClearingAnimation;
    UIView *_siriItemView;
    NSLayoutManager *_streamingLayoutManager;
    NSTextContainer *_streamingTextContainer;
    NSTextStorage *_streamingTextStorage;
    UITextView *_textView;
    NSMutableArray *_wordTokens;
    NSMutableArray *_words;
    NSArray *_wordsToSetAfterAnimations;
    bool_commitResultsAfterDynamicsFinish;
    bool_isPerformingLineChangeClearingAnimation;
    bool_waitingForDynamicsBehaviorToStop;
}

@property(readonly) NSLayoutManager * streamingLayoutManager;
@property(readonly) NSTextContainer * streamingTextContainer;
@property(readonly) NSTextStorage * streamingTextStorage;
@property(copy) NSArray * words;

- (void)_commitFinalResults;
- (void)animateText;
- (void)behaviorDidStop:(id)arg1;
- (void)commitFinalResults;
- (void)dealloc;
- (id)initWithTextView:(id)arg1;
- (void)setWords:(id)arg1;
- (id)streamingLayoutManager;
- (id)streamingTextContainer;
- (id)streamingTextStorage;
- (id)words;

@end
