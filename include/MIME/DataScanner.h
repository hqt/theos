/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface DataScanner : NSObject {
	NSData* myData;
	unsigned myLocation;
}
+(id)scannerWithData:(id)data;
-(void)setData:(id)data;
// inherited: -(void)dealloc;
-(id)data;
-(unsigned)scanLocation;
-(void)setScanLocation:(unsigned)location;
-(BOOL)scanByte:(char*)byte;
-(BOOL)scanInt:(int*)anInt;
-(BOOL)scanData:(id)data intoData:(id*)data2;
-(BOOL)scanCString:(const char*)string intoData:(id*)data;
-(BOOL)scanBytesFromSet:(id)set intoData:(id*)data;
-(void)incrementLocation;
-(BOOL)scanUpToData:(id)data intoData:(id*)data2;
-(BOOL)scanUpToCString:(const char*)cstring intoData:(id*)data;
-(BOOL)scanUpToBytesFromSet:(id)set intoData:(id*)data;
-(BOOL)isAtEnd;
-(BOOL)byteAtScanLocation;
-(id)nextTokenWithPunctuation:(id)punctuation;
-(instancetype)initWithData:(id)data;
@end

