/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSNumber, NSString;

@interface SKPaymentQueueClient : NSObject <NSCopying> {
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_receiptDirectoryPath;
    NSNumber *_storeExternalVersion;
    NSNumber *_storeItemIdentifier;
    NSString *_vendorIdentifier;
    bool_allowsBootstrapCellularData;
    bool_hidesConfirmationDialogs;
    bool_ignoresInAppPurchaseRestriction;
    bool_requiresAuthenticationForPayment;
}

@property bool allowsBootstrapCellularData;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * bundleVersion;
@property bool hidesConfirmationDialogs;
@property bool ignoresInAppPurchaseRestriction;
@property(copy) NSString * receiptDirectoryPath;
@property bool requiresAuthenticationForPayment;
@property(copy) NSNumber * storeExternalVersion;
@property(copy) NSNumber * storeItemIdentifier;
@property(copy) NSString * vendorIdentifier;

- (bool)allowsBootstrapCellularData;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (bool)hidesConfirmationDialogs;
- (bool)ignoresInAppPurchaseRestriction;
- (id)initWithXPCEncoding:(id)arg1;
- (id)receiptDirectoryPath;
- (bool)requiresAuthenticationForPayment;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setHidesConfirmationDialogs:(bool)arg1;
- (void)setIgnoresInAppPurchaseRestriction:(bool)arg1;
- (void)setReceiptDirectoryPath:(id)arg1;
- (void)setRequiresAuthenticationForPayment:(bool)arg1;
- (void)setStoreExternalVersion:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (id)storeExternalVersion;
- (id)storeItemIdentifier;
- (id)vendorIdentifier;

@end
