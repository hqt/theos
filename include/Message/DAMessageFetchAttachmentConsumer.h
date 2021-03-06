/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DAMailAccountConsumer.h"
#import "DAMessageFetchAttachmentConsumer.h"

@class ActivityMonitor, NSMutableData, NSData;

@protocol DAMessageFetchAttachmentConsumer
-(void)consumeData:(id)data ofContentType:(id)contentType forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;
-(void)attachmentFetchCompletedWithStatus:(int)status forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;
@end

@interface DAMessageFetchAttachmentConsumer : DAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {
	NSMutableData* _accumulatedData;
	unsigned _expectedLength;
	ActivityMonitor* _monitor;
}
@property(readonly, assign, nonatomic) NSData* accumulatedData;
@property(assign, nonatomic) unsigned expectedLength;
// in a protocol: -(void)consumeData:(id)data ofContentType:(id)contentType forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;
// in a protocol: -(void)attachmentFetchCompletedWithStatus:(int)status forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;
-(instancetype)initWithActivityMonitor:(id)activityMonitor;
// inherited: -(void)dealloc;
@end

