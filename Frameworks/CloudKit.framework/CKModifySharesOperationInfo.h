/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray;

@interface CKModifySharesOperationInfo : CKOperationInfo {
    NSArray *_shareIDsToDelete;
    NSArray *_sharesToSave;
}

@property(retain) NSArray * shareIDsToDelete;
@property(retain) NSArray * sharesToSave;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareIDsToDelete:(id)arg1;
- (void)setSharesToSave:(id)arg1;
- (id)shareIDsToDelete;
- (id)sharesToSave;

@end