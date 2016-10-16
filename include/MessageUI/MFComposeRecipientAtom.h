/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "MFAtomView.h"

@class ComposeRecipient, UITextInputTraits;

@interface MFComposeRecipientAtom : MFAtomView {
	ComposeRecipient* _recipient;
@private
	UITextInputTraits* _traits;
}
-(instancetype)initWithFrame:(CGRect)frame recipient:(id)recipient;
// inherited: -(void)dealloc;
// inherited: -(id)title;
-(void)setDelegate:(id)delegate;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)setMarkedText:(id)text;
// inherited: -(void)deleteBackward;
// inherited: -(BOOL)canBecomeFirstResponder;
// inherited: -(BOOL)becomeFirstResponder;
// inherited: -(id)textInputTraits;
// inherited: -(BOOL)canResignFirstResponder;
// inherited: -(BOOL)resignFirstResponder;
@end

