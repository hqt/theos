/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class UIImageView, UILabel;

@interface MPPortraitControlsOverlay : MPPlaybackControlsView {
	UILabel* _scrubSpeedLabel;
	UILabel* _scrubInstructionLabel;
	UIImageView* _scrubInstructionOverlay;
}
-(instancetype)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)createButtonForPart:(unsigned)part;
-(unsigned)_layoutStyle;
-(id)createProgressIndicator;
-(CGRect)hitRect;
-(void)layoutSubviews_Short;
-(void)layoutSubviews_Tall;
-(void)layoutSubviews;
-(void)resetDetailSlider:(id)slider;
-(void)updateForEndOfDetailScrubbing;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)_resetStateAfterSliderTrackingDone:(id)done;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)_scrubInstructionOverlayAnimationDidEnd;
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
@end

