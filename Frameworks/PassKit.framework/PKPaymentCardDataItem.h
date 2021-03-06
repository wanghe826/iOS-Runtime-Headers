/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CNContact, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentCardDataItem : PKPaymentDataItem {
}

@property(readonly) CNContact * billingAddress;
@property(readonly) PKPaymentPass * pass;
@property(readonly) PKPaymentApplication * paymentApplication;
@property(readonly) bool requiresBillingAddress;

+ (long long)dataType;

- (id)billingAddress;
- (bool)isValidWithError:(id*)arg1;
- (id)pass;
- (id)paymentApplication;
- (bool)requiresBillingAddress;

@end
