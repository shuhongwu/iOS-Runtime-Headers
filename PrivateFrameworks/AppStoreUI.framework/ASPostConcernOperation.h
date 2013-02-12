/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ASConcernItem, NSString;

@interface ASPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {
    NSString *_commentText;
    ASConcernItem *_concern;
    unsigned long long _itemIdentifier;
}

@property(retain) NSString * commentText;
@property(retain) ASConcernItem * concern;
@property unsigned long long itemIdentifier;

- (id)_httpBody;
- (id)commentText;
- (id)concern;
- (void)dealloc;
- (id)initWithConcern:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (void)setCommentText:(id)arg1;
- (void)setConcern:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;

@end