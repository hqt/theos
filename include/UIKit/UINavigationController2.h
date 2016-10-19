/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIViewController.h>
#import <Availability2.h>

@class UINavigationBar, UINavigationTransitionView, NSMutableArray, NSArray, UIView, UIToolbar;
@protocol UINavigationControllerDelegate;

@interface UINavigationController ()
-(instancetype)initWithNibName:(id)nibName bundle:(id)bundle;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)encodeWithCoder:(id)coder;
-(void)_releaseContainerViews;
-(void)dealloc;
-(int)modalTransitionStyle;
-(int)_transitionForOldViewControllers:(id)oldViewControllers newViewControllers:(id)controllers;
-(id)_navigationItems;
-(void)_setViewControllers:(id)controllers transition:(int)transition;
-(Class)navigationBarClass;
-(void)setNavigationBarClass:(Class)aClass;
-(void)setNavigationBar:(id)bar;
-(BOOL)_animationParametersForHidingNavigationBar:(BOOL)hidingNavigationBar lastOperation:(int)operation edge:(int*)edge duration:(double*)duration;
-(void)setNavigationBarHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)_setNavigationBarHidden:(BOOL)hidden edgeIfNotNavigating:(int)navigating duration:(double)duration;
-(void)_positionNavigationBarHidden:(BOOL)hidden;
-(void)_positionNavigationBarHidden:(BOOL)hidden edge:(int)edge;
-(void)_setNavigationBarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;
-(void)_hideShowNavigationBarDidStop:(id)_hideShowNavigationBar finished:(id)finished context:(void*)context;
-(id)_existingToolbar;
-(void)_configureToolbar;
-(void)setToolbar:(id)toolbar;
-(void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)_positionToolbarHidden:(BOOL)hidden;
-(void)_positionToolbarHidden:(BOOL)hidden edge:(int)edge;
-(void)_setToolbarHidden:(BOOL)hidden edge:(int)edge duration:(double)duration;
-(void)_hideShowToolbarDidStop:(id)_hideShowToolbar finished:(id)finished context:(void*)context;
-(void)loadView;
-(BOOL)isShown;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)purgeMemoryForReason:(int)reason;
-(void)viewDidUnload;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(BOOL)editing;
-(void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;
-(BOOL)_reallyWantsFullScreenLayout;
-(void)willShowViewController:(id)controller animated:(BOOL)animated;
-(void)didShowViewController:(id)controller animated:(BOOL)animated;
-(void)navigationTransitionView:(id)view didStartTransition:(int)transition __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(void)navigationTransitionView:(id)view didEndTransition:(int)transition fromView:(id)view3 toView:(id)view4;
-(double)navigationTransitionView:(id)view durationForTransition:(int)transition;
-(void)setNeedsDeferredTransition;
-(int)lastOperation;
-(BOOL)wasLastOperationAnimated;
-(void)_updateBarsForCurrentInterfaceOrientation;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)_applyScrollContentInsetDelta:(UIEdgeInsets)delta toScrollView:(id)scrollView;
-(void)_applyScrollContentOffsetDelta:(float)delta toScrollView:(id)scrollView;
-(void)_restoreOriginalInsetAndOffsetToScrollView:(id)scrollView;
-(BOOL)_hasTranslucentNavigationBarIncludingViewController:(id)controller;
-(BOOL)_isNavigationBarVisible;
-(BOOL)_shouldNavigationBarInsetViewController:(id)controller;
-(BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;
-(CGRect)_frameForViewController:(id)viewController;
-(void)_layoutTopViewController;
-(void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)viewController;
-(void)_layoutViewController:(id)controller;
-(int)_navigationTransitionForUITransition:(int)uitransition;
-(void)_startTransition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;
-(void)_startDeferredTransitionIfNeeded;
-(int)_deferredTransition;
-(void)_clearLastOperation;
-(void)viewWillLayoutSubviews;
-(void)pushViewController:(id)controller transition:(int)transition forceImmediate:(BOOL)immediate;
-(void)pushViewController:(id)controller transition:(int)transition;
-(BOOL)_shouldBottomBarBeHidden;
-(void)_resetBottomBarHiddenState;
-(void)_updateBottomBarHiddenState;
-(void)_hideOrShowBottomBarIfNeededWithTransition:(int)transition;
-(void)_tabBarControllerDidFinishShowingTabBar:(id)_tabBarController;
-(id)_snapshotView;
-(BOOL)_shouldPopFromLandscapeToPortraitOrientation;
-(void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(BOOL)animated;
-(id)_popViewControllerWithTransition:(int)transition allowPoppingLast:(BOOL)last;
-(id)popViewControllerWithAnimationTransition:(int)animationTransition duration:(double)duration curve:(int)curve;
-(id)popViewControllerWithTransition:(int)transition;
-(id)popToRootViewControllerWithTransition:(int)transition;
-(id)popToViewController:(id)viewController transition:(int)transition;
-(id)popToViewControllerWithSnapbackIdentifier:(id)snapbackIdentifier animated:(BOOL)animated;
-(void)makeModalViewControllerTopViewController;
-(BOOL)_allowsAutorotation;
-(BOOL)_doesTopViewControllerSupportInterfaceOrientation:(int)orientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(BOOL)_shouldUseOnePartRotation;
-(void)_getRotationContentSettings:(XXStruct_TF$i3B*)settings;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)updateTitleForViewController:(id)viewController;
-(BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
-(void)navigationBar:(id)bar buttonClicked:(int)clicked;
-(void)navigationBarDidResizeForPrompt:(id)navigationBar;
-(void)navigationBarDidChangeOpacity:(id)navigationBar;
-(id)defaultPNGName;
-(id)tabBarItem;
-(void)updateTabBarItemForViewController:(id)viewController;
-(void)_layoutTopViewControllerInSheet __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(void)_layoutTopViewControllerOutOfSheet __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(id)_moreListTitle __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(id)moreListImage;
-(id)moreListSelectedImage;
-(id)moreListTableCell;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@interface UINavigationController (MasterDetailLegacySupport)
@property(assign) BOOL isExpanded;
@property(retain) UIViewController* detailViewController;
@end
#endif