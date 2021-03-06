/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString;

@interface SGDataDetectorMatch : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _labelRange;
    unsigned int _matchType;
    } _range;
    } _valueRange;
    NSString *_valueString;
}

@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } labelRange;
@property(readonly) unsigned int matchType;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property(readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } valueRange;
@property(readonly) NSString * valueString;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMatchType:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 labelRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 valueRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 valueString:(id)arg5;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })labelRange;
- (unsigned int)matchType;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })valueRange;
- (id)valueString;

@end
