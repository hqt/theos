/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIcon.h"

@class SBApplication;

@interface SBApplicationIcon : SBIcon {
	SBApplication* _app;
}
-(instancetype)initWithApplication:(id)application;
// inherited: -(void)dealloc;
-(id)application;
// inherited: -(id)icon;
// inherited: -(id)smallIcon;
// inherited: -(id)displayName;
// inherited: -(id)displayIdentifier;
// inherited: -(id)modificationDate:(BOOL)date;
// inherited: -(BOOL)shouldEllipsizeLabel;
// inherited: -(id)tags;
// inherited: -(id)_automationID;
// inherited: -(BOOL)launchEnabled;
// inherited: -(void)launch;
// inherited: -(void)setBadge:(id)badge;
@end

