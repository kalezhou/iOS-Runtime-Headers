/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSArray, SAPerson;

@interface SASmsRecipientSearch : SABaseClientBoundCommand  {
}

@property(copy) NSURL * targetAppId;
@property(retain) SAPerson * recipient;
@property(copy) NSArray * recipients;

+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setRecipient:(id)arg1;
- (id)recipient;
- (id)recipients;
- (void)setRecipients:(id)arg1;
- (id)encodedClassName;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (BOOL)requiresResponse;

@end