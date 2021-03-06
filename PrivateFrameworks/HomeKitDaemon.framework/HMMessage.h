/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSString, NSUUID;

@interface HMMessage : NSObject {
    NSUUID *_identifier;
    NSDictionary *_messagePayload;
    NSString *_name;
    id _responseHandler;
    id _transport;
    bool_remoteSource;
}

@property(readonly) NSUUID * identifier;
@property(readonly) NSDictionary * messagePayload;
@property(readonly) NSString * name;
@property(getter=isRemoteSource,readonly) bool remoteSource;
@property(readonly) id responseHandler;
@property(readonly) id transport;

+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(bool)arg4 responseHandler:(id)arg5;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 remoteSource:(bool)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 responseHandler:(id)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id)arg5;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4;
+ (id)messageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3 responseHandler:(id)arg4;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2 transport:(id)arg3;
+ (id)messageWithName:(id)arg1 messagePayload:(id)arg2;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (bool)boolForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3 transport:(id)arg4 responseHandler:(id)arg5 remoteSource:(bool)arg6;
- (bool)isRemoteSource;
- (id)messagePayload;
- (id)name;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)responseHandler;
- (int)sourcePid;
- (id)stringForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)transport;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromRemoteMessageForKey:(id)arg1;

@end
