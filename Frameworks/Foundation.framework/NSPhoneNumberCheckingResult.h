/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    NSString *_phoneNumber;
    } _range;
    id _underlyingResult;
}

@property(readonly) void* underlyingResult;

- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 phoneNumber:(id)arg2;
- (id)phoneNumber;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;
- (void*)underlyingResult;

@end