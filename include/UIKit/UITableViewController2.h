/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIViewController.h>
#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <Availability2.h>

@class UITableView;

@interface UITableViewController ()
// inherited: -(instancetype)init;
// inherited: -(void)dealloc;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(id)_existingTableView;
#else
-(id)existingTableView;
#endif
// inherited: -(void)loadView;
// inherited: -(void)viewWillAppear:(BOOL)view;
// inherited: -(void)viewWillDisappear:(BOOL)view;
// inherited: -(void)viewDidAppear:(BOOL)view;
// inherited: -(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)_adjustTableForKeyboardInfo:(id)keyboardInfo;
// in a protocol: -(int)tableView:(id)view numberOfRowsInSection:(int)section;
// in a protocol: -(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
// in a protocol: -(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
// in a protocol: -(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
@end
