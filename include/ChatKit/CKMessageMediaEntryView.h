/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import "CKMessageEntryView.h"

@class UIButton;

@interface CKMessageMediaEntryView : CKMessageEntryView {
	UIButton* _photoButton;
}
@property(readonly, assign, nonatomic) UIButton* photoButton;
+(CGRect)sendButtonFrame:(CGRect)frame;
+(CGRect)photoButtonFrame:(CGRect)frame;
+(CGRect)entryFieldBalloonFrame:(CGRect)frame;
-(void)dealloc;
-(instancetype)initWithFrame:(CGRect)frame;
@end

