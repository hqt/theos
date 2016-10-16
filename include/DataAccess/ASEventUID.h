/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "NSCopying.h"
#import "DataAccess-Structs.h"
#import "ASParsingLeafNode.h"

@class NSString, NSDate;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {
	NSDate* _exceptionDate;
	NSString* _uidWithoutExceptionDate;
	BOOL _isOutlookCreatedUid;
}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
// in a protocol: +(BOOL)expectsContent;
-(id)uidFromGlobalObjId:(id)globalObjId outExceptionDate:(id*)date outIsOutlookCreatedUid:(BOOL*)uid;
-(id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)outlookUUIDString;
// inherited: -(id)description;
// inherited: -(void)dealloc;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
-(instancetype)initWithCalFrameworkString:(id)calFrameworkString;
// in a protocol: -(instancetype)initWithASParseContext:(id)asparseContext root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 lengthUntilEndOfTerminator:(int)terminator;
// in a protocol: -(int)parsingState;
-(id)uidForCalFramework;
-(id)uidForResponseEmail;
-(id)recurrenceIDForResponseEmail;
-(id)uidWithoutExceptionDate;
-(id)uidForActiveSync;
-(id)exceptionDate;
-(void)setExceptionDate:(id)date;
@end

