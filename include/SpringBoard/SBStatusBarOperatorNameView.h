/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBStatusBarContentView.h"

@class NSString;

@interface SBStatusBarOperatorNameView : SBStatusBarContentView {
	float _letterSpacing;
	NSString* _operatorName;
	BOOL _fullSize;
}
-(instancetype)initWithOperatorName:(id)operatorName;
// inherited: -(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(float)calculateLetterSpacingForOperatorName:(id)operatorName;
-(id)operatorName;
-(void)setOperatorName:(id)name fullSize:(BOOL)size;
@end

