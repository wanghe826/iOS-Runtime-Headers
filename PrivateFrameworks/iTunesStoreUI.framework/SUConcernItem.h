/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;

@interface SUConcernItem : NSObject {
    NSString *_identifier;
    NSString *_title;
    bool_default;
}

@property(getter=isDefaultConcern) bool defaultConcern;
@property(retain) NSString * identifier;
@property(retain) NSString * title;

- (void)dealloc;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (bool)isDefaultConcern;
- (void)setDefaultConcern:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
