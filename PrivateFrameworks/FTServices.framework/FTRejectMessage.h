/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;



@interface FTRejectMessage : FTMessage 
{
    NSData *_peerPushToken;
    NSData *_selfPushToken;
    NSString *_peerID;
    NSNumber *_reason;
}

@property(copy) NSNumber *reason;
@property(copy) NSString *peerID;
@property(copy) NSData *peerPushToken;
@property(copy) NSData *selfPushToken;


- (id)messageBody;
- (id)bagKey;
- (void)setReason:(id)arg1;
- (void)dealloc;
- (id)peerID;
- (id)peerPushToken;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerID:(id)arg1;
- (id)selfPushToken;
- (void)setSelfPushToken:(id)arg1;
- (id)requiredKeys;
- (id)reason;

@end