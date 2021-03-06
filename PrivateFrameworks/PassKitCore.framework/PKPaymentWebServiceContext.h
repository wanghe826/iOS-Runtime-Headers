/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSArray, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface PKPaymentWebServiceContext : NSObject <NSSecureCoding> {
    NSArray *_certificates;
    NSDate *_configurationDate;
    long long _consistencyCheckBackoffLevel;
    NSString *_deviceID;
    NSString *_lastUpdatedTag;
    NSString *_pushToken;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_registrationDate;
    NSString *_secureElementID;
    NSMutableDictionary *_verificationRequestsByPassUniqueID;
    bool_devSigned;
    bool_messageServiceDisabled;
    bool_transactionServiceDisabled;
}

@property(copy) NSArray * certificates;
@property(copy) NSDate * configurationDate;
@property long long consistencyCheckBackoffLevel;
@property bool devSigned;
@property(copy) NSString * deviceID;
@property(copy) NSString * lastUpdatedTag;
@property bool messageServiceDisabled;
@property(copy) NSString * pushToken;
@property(copy) NSDate * registrationDate;
@property(copy) NSString * secureElementID;
@property bool transactionServiceDisabled;
@property(retain) NSMutableDictionary * verificationRequestsByPassUniqueID;

+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (void)archiveAtPath:(id)arg1;
- (id)certificates;
- (id)configurationDate;
- (long long)consistencyCheckBackoffLevel;
- (void)dealloc;
- (bool)devSigned;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedTag;
- (bool)messageServiceDisabled;
- (id)pushToken;
- (id)registrationDate;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)secureElementID;
- (void)setCertificates:(id)arg1;
- (void)setConfigurationDate:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(long long)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setMessageServiceDisabled:(bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRegistrationDate:(id)arg1;
- (void)setSecureElementID:(id)arg1;
- (void)setTransactionServiceDisabled:(bool)arg1;
- (void)setVerificationRequestsByPassUniqueID:(id)arg1;
- (bool)transactionServiceDisabled;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (id)verificationRequestsByPassUniqueID;

@end
