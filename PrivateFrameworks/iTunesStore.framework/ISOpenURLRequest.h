/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSURL;

@interface ISOpenURLRequest : NSObject <NSCopying> {
    NSString *_targetIdentifier;
    NSURL *_url;
    NSString *_urlBagKey;
    bool_interruptsKeybagRefresh;
    bool_isITunesStoreURL;
}

@property(getter=isITunesStoreURL) bool ITunesStoreURL;
@property(retain) NSURL * URL;
@property(copy) NSString * URLBagKey;
@property bool interruptsKeybagRefresh;
@property(copy) NSString * targetIdentifier;

+ (id)openURLRequestWithURL:(id)arg1;

- (id)URL;
- (id)URLBagKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURLBagKey:(id)arg1;
- (bool)interruptsKeybagRefresh;
- (bool)isITunesStoreURL;
- (void)setITunesStoreURL:(bool)arg1;
- (void)setInterruptsKeybagRefresh:(bool)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLBagKey:(id)arg1;
- (id)targetIdentifier;

@end
