/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * message;
@property(copy) NSArray * recipients;
@property(readonly) Class superclass;

+ (id)smsPayload;
+ (id)smsPayloadWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)message;
- (id)recipients;
- (void)setMessage:(id)arg1;
- (void)setRecipients:(id)arg1;

@end