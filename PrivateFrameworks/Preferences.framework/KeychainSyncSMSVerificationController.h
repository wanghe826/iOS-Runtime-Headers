/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, PSKeychainSyncManager, UIAlertView, UIButton;

@interface KeychainSyncSMSVerificationController : KeychainSyncTextEntryController <UIAlertViewDelegate> {
    NSString *_countryCode;
    NSString *_dialingPrefix;
    UIButton *_footerButton;
    PSKeychainSyncManager *_keychainSyncManager;
    NSString *_phoneNumber;
    UIAlertView *_supportVerificationAlert;
    unsigned long long _verificationCodeLength;
}

@property(retain) NSString * countryCode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * dialingPrefix;
@property(readonly) unsigned long long hash;
@property PSKeychainSyncManager * keychainSyncManager;
@property(retain) NSString * phoneNumber;
@property(readonly) Class superclass;
@property unsigned long long verificationCodeLength;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)countryCode;
- (void)dealloc;
- (id)dialingPrefix;
- (void)dismissAlerts;
- (id)init;
- (id)keychainSyncManager;
- (void)loadView;
- (unsigned long long)numberOfPasscodeFields;
- (id)phoneNumber;
- (void)setCountryCode:(id)arg1;
- (void)setDialingPrefix:(id)arg1;
- (void)setKeychainSyncManager:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setVerificationCodeLength:(unsigned long long)arg1;
- (void)showSupportVerification;
- (id)specifiers;
- (unsigned long long)verificationCodeLength;
- (void)viewDidLayoutSubviews;

@end
