/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PHVideoRequestOptions : NSObject {
    long long _deliveryMode;
    id _progressHandler;
    long long _version;
    bool_networkAccessAllowed;
    bool_streamingAllowed;
}

@property long long deliveryMode;
@property(getter=isNetworkAccessAllowed) bool networkAccessAllowed;
@property(copy) id progressHandler;
@property(getter=isStreamingAllowed) bool streamingAllowed;
@property long long version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deliveryMode;
- (id)description;
- (id)init;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (id)progressHandler;
- (void)setDeliveryMode:(long long)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id)arg1;
- (void)setStreamingAllowed:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

@end
