/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVGet : DAVRequest {
}
+(id)getRequestWithURL:(id)url;
+(id)getRequestWithSession:(id)session path:(id)path;
+(id)getRequestWithSession:(id)session URI:(id)uri;
-(instancetype)initGetWithURL:(id)url;
-(instancetype)initGetWithSession:(id)session path:(id)path;
-(instancetype)initGetWithSession:(id)session URI:(id)uri;
-(id)data;
@end

