/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "LibraryStore.h"

@class POP3Connection;

@interface LibraryPOPStore : LibraryStore {
	POP3Connection* _connection;
}
// inherited: -(instancetype)initWithMailboxUid:(id)mailboxUid readOnly:(BOOL)only;
-(void)openSynchronouslyUpdatingMetadata:(BOOL)metadata;
// inherited: -(id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL*)download;
// inherited: -(id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL*)complete;
// inherited: -(id)bodyDataForMessage:(id)message isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary;
// inherited: -(id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary;
// inherited: -(id)_fetchHeaderDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;
// inherited: -(id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available downloadIfNecessary:(BOOL)necessary partial:(BOOL*)partial;
// inherited: -(int)fetchSynchronously;
// inherited: -(void)purgeMessages:(id)messages;
// inherited: -(int)fetchNumMessages:(unsigned)messages preservingUID:(id)uid beforeUID:(unsigned)uid3 synchronize:(BOOL)synchronize compact:(BOOL)compact;
// inherited: -(void)dealloc;
// inherited: -(id)messageForRemoteID:(id)remoteID;
// inherited: -(void)messagesWereDeleted:(id)deleted;
// inherited: -(void)_handleFlagsChangedForMessages:(id)messages oldFlagsByMessage:(id)message;
-(void)setServerMessageCount:(unsigned)count;
// inherited: -(unsigned)serverMessageCount;
-(void)setServerUnreadCount:(unsigned)count;
// inherited: -(unsigned)serverUnreadOnlyOnServerCount;
// inherited: -(unsigned)serverUnreadCount;
// inherited: -(BOOL)hasMoreMessages:(unsigned)messages;
@end

