/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaQuery, NSMutableDictionary, MLPlaylist;

@interface MPMediaPlaylistInternal : NSObject {
@private
	unsigned long long _uid;
	NSMutableDictionary* _storage;
	MPMediaQuery* _itemsQuery;
	MLPlaylist* _playlist;
}
@end
