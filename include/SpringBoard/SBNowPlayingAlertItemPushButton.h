/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIPushButton.h>


@interface SBNowPlayingAlertItemPushButton : UIPushButton {
	float _yOffset;
	float _xOffset;
}
// inherited: -(instancetype)initWithImage:(id)image;
-(void)setYOffset:(float)offset;
-(void)setXOffset:(float)offset;
-(CGRect)hitRect;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
@end

