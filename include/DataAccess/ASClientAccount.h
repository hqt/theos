/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASAccount.h"

@class NSMutableSet;

@interface ASClientAccount : ASAccount {
	NSMutableSet* _daemonMonitoredFolders;
	NSMutableSet* _foldersToRetryForMonitoring;
	NSMutableSet* _folderIDsOnRemoteHold;
}
// inherited: -(id)_newPolicyManager;
// inherited: -(instancetype)initWithProperties:(id)properties;
// inherited: -(void)dealloc;
-(void)clearFolderHierarchyCache;
-(void)_folderHierarchyChanged;
-(void)_foldersThatExternalClientsCareAboutChanged;
// inherited: -(void)resumeMonitoringFoldersWithIDs:(id)ids;
-(void)_foldersUpdated:(id)updated;
-(void)_daemonDied;
-(void)_logStatus:(id)status;
-(void)_addFoldersToDaemonMonitoring:(id)daemonMonitoring;
-(void)_removeFoldersFromDaemonMonitoring:(id)daemonMonitoring;
-(void)_retryMonitoring;
-(void)monitorFoldersForUpdates:(id)updates;
-(void)stopMonitoringFoldersForUpdates:(id)updates;
-(void)stopMonitoringAllFolders;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)metaData inFolderWithId:(id)anId;
// inherited: -(void)upgradeWithProtocolVersion:(id)protocolVersion;
// inherited: -(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)added deleted:(id)deleted foldersTag:(id)tag;
// inherited: -(void)suspendMonitoringFoldersWithIDs:(id)ids;
-(void)_sync:(id)sync withConsumer:(id)consumer;
// inherited: -(void)sendMailTask:(id)task completedWithStatus:(int)status error:(id)error;
-(void)moveItemsTask:(id)task completedWithStatus:(int)status error:(id)error movedItems:(id)items;
-(int)performMoveRequests:(id)requests consumer:(id)consumer;
-(int)performFetchAttachmentRequest:(id)request consumer:(id)consumer;
-(int)performFetchMessageSearchResultRequests:(id)requests consumer:(id)consumer;
-(id)_copySetFlagsCommandForRequest:(id)request;
-(int)performMailboxRequests:(id)requests mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;
-(int)performMailboxRequest:(id)request mailbox:(id)mailbox previousTag:(id)tag consumer:(id)consumer;
-(id)mailboxes;
-(void)_reportFolderItemSyncSuccess:(BOOL)success forFolderWithID:(id)anId;
@end

