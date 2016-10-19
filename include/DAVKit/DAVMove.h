/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVMove : DAVRequest {
}
+(id)moveRequestWithSession:(id)session path:(id)path toPath:(id)path3;
-(void)addToHeader:(id)header;
-(instancetype)initMoveWithSession:(id)session path:(id)path toPath:(id)path3;
-(id)dependenciesList;
@end
