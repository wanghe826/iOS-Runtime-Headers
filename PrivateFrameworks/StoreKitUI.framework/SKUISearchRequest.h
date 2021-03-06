/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying> {
    NSNumber *_searchHintIndex;
    NSString *_searchHintOriginalTerm;
    NSString *_term;
    NSURL *_url;
}

@property(copy) NSURL * URL;
@property(copy) NSNumber * searchHintIndex;
@property(copy) NSString * searchHintOriginalTerm;
@property(copy) NSString * term;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)searchHintIndex;
- (id)searchHintOriginalTerm;
- (void)setSearchHintIndex:(id)arg1;
- (void)setSearchHintOriginalTerm:(id)arg1;
- (void)setTerm:(id)arg1;
- (void)setURL:(id)arg1;
- (id)term;

@end
