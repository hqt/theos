/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "Connection.h"
#import "WeakReferenceHolder.h"
#import "IMAPConnection.h"

@class NSString, NSMutableSet, NSArray, NSMutableData, InvocationQueue;
@protocol IMAPMailboxListFilter;

@interface IMAPConnection : Connection <WeakReferenceHolder> {
	id<IMAPMailboxListFilter> _mailboxListFilter;
	unsigned _capabilityFlags : 13;
	unsigned _capabilitiesAreFresh : 1;
	unsigned _gotBadResponse : 1;
	int _tag;
	double _connectTime;
	unsigned _connectionState : 3;
	NSString* _separatorChar;
	NSString* _selectedMailbox;
	NSMutableSet* _capabilities;
	NSArray* _lastRequiredHeadersArray;
	NSString* _lastRequiredHeaders;
	unsigned _commandNumber;
	NSMutableData* _data;
	unsigned _readBufferSize;
	double _expirationTime;
	InvocationQueue* _streamEventQueue;
	struct {
		id<WeaklyReferencedObject> delegate;
		unsigned shouldHandleUntaggedResponse : 1;
		unsigned didReceiveResponse : 1;
		unsigned didFinishSelect : 1;
		unsigned didDisconnect : 1;
		unsigned didBeginBodyLoad : 1;
		unsigned didReceiveMoreBodyData : 1;
		unsigned didFinishBodyDataLoad : 1;
		unsigned bodyDataReadSize : 1;
		unsigned setServerMessageCount : 1;
	} _delegateState;
	NSString* _apsDeviceToken;
	NSString* _apsAccountID;
}
// inherited: +(void)initialize;
+(void)setReadSizeParameters;
// inherited: -(instancetype)init;
// in a protocol: -(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(id)mailboxListFilter;
-(void)setMailboxListFilter:(id)filter;
-(BOOL)_doBasicConnectionUsingAccount:(id)account;
-(BOOL)_tryConnectionUsingAccount:(id)account;
// inherited: -(BOOL)connectUsingAccount:(id)account;
-(void)disconnectAndNotifyDelegate:(BOOL)delegate;
// inherited: -(void)disconnect;
-(int)connectionState;
// inherited: -(BOOL)isValid;
-(unsigned)_sendCommands:(XXStruct_rpKdCA*)commands count:(unsigned)count response:(id*)response;
-(id)_copyNextServerResponseForCommand:(XXStruct_rpKdCA*)command;
-(id)_copyNextTaggedOrContinuationResponseForCommand:(XXStruct_rpKdCA*)command;
-(id)_errorForResponse:(id)response commandParams:(XXStruct_rpKdCA*)params;
// inherited: -(id)capabilities;
-(BOOL)supportsCapability:(int)capability;
-(BOOL)supportsCapabilityForceFresh:(int)fresh;
-(void)fetchFreshCapabilitiesForAccount:(id)account;
-(void)noop;
// inherited: -(BOOL)authenticateUsingAccount:(id)account;
-(BOOL)loginWithAccount:(id)account password:(id)password;
-(BOOL)logout;
-(id)separatorChar;
-(id)_doListCommand:(int)command withReference:(id)reference mailboxName:(id)name options:(int)options;
-(id)_listingForMailbox:(id)mailbox options:(int)options withCommand:(int)command;
-(id)listingForMailbox:(id)mailbox options:(int)options;
-(id)subscribedListingForMailbox:(id)mailbox options:(int)options;
-(id)extendedListingForMailbox:(id)mailbox options:(int)options;
-(void)close;
-(BOOL)closeAndLogout;
-(void)unselect;
-(BOOL)expunge;
-(BOOL)expungeUids:(id)uids;
-(void)fetchStatusForMailboxes:(id)mailboxes args:(id)args;
-(id)statusForMailbox:(id)mailbox args:(id)args;
-(BOOL)examineMailbox:(id)mailbox;
-(BOOL)selectMailbox:(id)mailbox;
-(id)selectedMailbox;
-(BOOL)createMailbox:(id)mailbox;
-(BOOL)deleteMailbox:(id)mailbox;
-(BOOL)renameMailbox:(id)mailbox toMailbox:(id)mailbox2;
-(BOOL)subscribeMailbox:(id)mailbox;
-(BOOL)unsubscribeMailbox:(id)mailbox;
-(void)fetchQuotaRootNamesForMailboxes:(id)mailboxes;
-(BOOL)getQuotaForRootName:(id)rootName;
-(id)quotaPercentagesForMailbox:(id)mailbox;
-(BOOL)_sendMailboxCommand:(int)command withArguments:(id)arguments;
-(id)searchUidSet:(id)set forTerms:(id)terms success:(BOOL*)success;
-(id)searchIDSet:(id)set forTerms:(id)terms success:(BOOL*)success;
-(int)searchCount:(id)count;
-(unsigned)getMailboxIDForUID:(unsigned)uid;
-(id)searchUidSet:(id)set forNewMessageIDs:(id)newMessageIDs;
-(BOOL)storeFlags:(id)flags state:(BOOL)state forMessageSet:(id)messageSet;
-(BOOL)storeFlags:(id)flags state:(BOOL)state forUids:(id)uids;
-(BOOL)storeFlags:(id)flags state:(BOOL)state forRange:(NSRange)range;
-(BOOL)deleteMessagesOlderThanNumberOfDays:(int)days;
-(id)_responseFromSendingCommand:(XXStruct_rpKdCA*)sendingCommand andPossiblyCreateMailbox:(id)mailbox;
-(BOOL)copyUids:(id)uids toMailboxNamed:(id)mailboxNamed newMessageInfo:(id*)info;
-(BOOL)appendData:(id)data toMailboxNamed:(id)mailboxNamed flags:(id)flags dateReceived:(id)received newMessageInfo:(id*)info;
-(id)_headersToFetchIncludingThoseRequiredForRouting:(BOOL)routing withRecipients:(BOOL)recipients;
-(id)fetchArgumentForMessageSkeletonsWithTo:(BOOL)to;
-(void)fetchTotalSize:(unsigned long long*)size andMessageCount:(unsigned*)count;
-(id)fetchHeadersForUid:(unsigned long)uid;
-(BOOL)performCustomCommand:(id)command withArguments:(id)arguments;
-(void)setReadBufferSizeFromElapsedTime:(double)elapsedTime bytesRead:(unsigned)read;
-(unsigned)readBufferSize;
-(void)setReadBufferSize:(unsigned)size;
-(BOOL)_doUidFetchWithRange:(NSRange)range arguments:(id)arguments validateMessage:(BOOL)message responses:(id)responses;
-(id)messageSetForRange:(NSRange)range;
-(id)messageSetForRange:(NSRange)range butNotNumbers:(id)numbers;
-(id)messageSetForNumbers:(id)numbers range:(NSRange)range maxTokens:(int)tokens indexOfLastNumber:(int*)lastNumber;
-(id)messageSetForNumbers:(id)numbers range:(NSRange)range;
-(id)parenthesizedStringWithObjects:(id)objects;
// inherited: -(BOOL)authenticateUsingAccount:(id)account authenticator:(id)authenticator;
// inherited: -(BOOL)startTLSForAccount:(id)account;
-(void)lock;
// in a protocol: -(id)description;
-(id)serverPathPrefix;
-(id)copyWithZone:(NSZone*)zone;
// in a protocol: -(id)retain;
-(void)release;
// in a protocol: -(unsigned)retainCount;
// in a protocol: -(void)objectWillBeDeallocated:(id)object;
@end

@interface IMAPConnection (MFPrivate)
-(void)notifyDelegateOfBodyLoadStart:(id)bodyLoadStart;
-(void)notifyDelegateOfBodyLoadAppendage:(id)bodyLoadAppendage;
-(void)notifyDelegateOfBodyLoadCompletion:(id)bodyLoadCompletion;
-(unsigned)literalChunkSize;
-(id)_readDataOfLength:(int)length;
-(id)_fetchArgumentForMessageUidsAndFlags;
-(id)_fetchArgumentForMessageSkeletonsWithHeaders:(id)headers;
-(BOOL)_isFetchResponseValid:(id)valid;
-(id)_responseFromSendingCommands:(XXStruct_rpKdCA*)sendingCommands count:(unsigned)count;
-(BOOL)sendResponsesForCommand:(XXStruct_rpKdCA*)command toQueue:(id)queue;
-(BOOL)sendResponsesForUIDFetchForUIDs:(id)uids fields:(id)fields toQueue:(id)queue;
-(BOOL)sendSkeletonResponsesForUIDs:(id)uids includeTo:(BOOL)to toQueue:(id)queue;
-(BOOL)sendUidAndFlagResponsesForUIDs:(id)uids toQueue:(id)queue;
-(BOOL)sendUidResponsesForSearchArguments:(id)searchArguments toQueue:(id)queue;
-(void)didFinishCommands:(XXStruct_rpKdCA*)commands count:(unsigned)count;
@end

