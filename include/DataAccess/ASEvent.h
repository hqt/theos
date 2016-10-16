/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASChangedCollectionLeaf.h"
#import "ASDataElement.h"
#import "NSCoding.h"

@class ASEventUID, ASTimeZone, ASRecurrence, NSNumber, NSDate, NSString, NSArray;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, ASDataElement> {
	void* _calRecord;
	ASTimeZone* _timeZone;
	NSNumber* _allDayEvent;
	NSString* _body;
	NSNumber* _bodyTruncated;
	NSNumber* _busyStatus;
	NSDate* _dTStamp;
	NSDate* _endTime;
	NSString* _location;
	NSNumber* _meetingStatus;
	NSString* _organizerEmail;
	NSString* _organizerName;
	NSNumber* _reminderMinsBefore;
	NSNumber* _sensitivity;
	NSString* _subject;
	NSDate* _startTime;
	ASEventUID* _eventUID;
	NSArray* _attendees;
	NSArray* _attendeesPendingDeletion;
	ASRecurrence* _recurrence;
	NSArray* _exceptions;
	NSNumber* _responseRequested;
	int _meetingResponseToEmailAbout;
	BOOL _calculateNextStatusAsIfMeetingRequest;
	BOOL _shouldUpdateStatus;
	BOOL _cachedOrganizerIsSelf;
	BOOL _haveCheckedOrganizerEmail;
	BOOL _isAttendeeUpdateOnly;
	BOOL _isDTStampUpdateOnly;
}
@property(retain) ASTimeZone* timeZone;
@property(retain) NSNumber* allDayEvent;
@property(retain) NSString* body;
@property(retain) NSNumber* bodyTruncated;
@property(retain) NSNumber* busyStatus;
@property(retain) NSDate* dTStamp;
@property(retain) NSDate* endTime;
@property(retain) NSString* location;
@property(retain) NSNumber* meetingStatus;
@property(retain) NSString* organizerEmail;
@property(retain) NSString* organizerName;
@property(retain) NSNumber* reminderMinsBefore;
@property(retain) NSNumber* sensitivity;
@property(retain) NSString* subject;
@property(retain) NSDate* startTime;
@property(retain) NSArray* attendees;
@property(retain) ASRecurrence* recurrence;
@property(retain) NSArray* exceptions;
@property(retain) ASEventUID* eventUID;
@property(retain) NSArray* attendeesPendingDeletion;
@property(retain) NSNumber* responseRequested;
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
+(id)eventWithCalEvent:(void*)calEvent serverID:(id)anId account:(id)account;
+(void)_setFakeDTStampDateForUnitTests:(id)unitTests;
-(id)_transformedStartDateForCalFramework:(id)calFramework;
-(id)_transformedEndDateForCalFramework:(id)calFramework startDate:(id)date;
-(id)_transformedStartDateForActiveSync:(id)activeSync;
-(id)_transformedEndDateForActiveSync:(id)activeSync;
-(id)timeZoneNameForCalFramework;
// inherited: -(id)asParseRules;
// inherited: -(int)classType;
-(id)uidGeneratedIfNecessaryWithLocalEvent:(void*)localEvent;
-(void)_loadAttributesFromCalEvent:(void*)calEvent forAccount:(id)account;
// inherited: -(instancetype)init;
-(instancetype)initWithCalEvent:(void*)calEvent serverID:(id)anId account:(id)account;
-(BOOL)hasLocalModifications:(void*)modifications;
// inherited: -(void)dealloc;
// inherited: -(id)description;
-(int)calEventStatus;
-(int)calEventExternalStatus;
-(int)_nextEventStatusWithOldStatus:(int)oldStatus meetingClassType:(int)type;
-(int)_nextEventStatusWithOldStatus:(int)oldStatus;
-(int)_meetingResponseShouldFilterForEmail:(BOOL)_meetingResponse;
-(int)meetingResponse;
-(int)meetingResponseForEmail;
-(void)setMeetingResponseForEmail:(int)email;
-(BOOL)_bailIfNotNewestData;
-(BOOL)shouldUseInMemoryAttendeesForAccount:(id)account numExistingAttendees:(int)attendees;
-(void)_updateDTStampOnly;
-(BOOL)saveToCalendarWithExistingRecord:(void*)existingRecord intoCalendar:(void*)calendar treatNullsAsDeletes:(BOOL)deletes account:(id)account;
-(BOOL)_shouldKeepLocalExceptions;
-(void)_sanitizeLocalExceptionsForAccount:(id)account;
-(BOOL)saveDetachedEventsWithExistingRecord:(void*)existingRecord intoCalendar:(void*)calendar treatNullsAsDeletes:(BOOL)deletes account:(id)account;
-(void)informExceptionsThatParentIsReadyForAccount:(id)account;
-(void)_determineSelfnessWithLocalEvent:(void*)localEvent forAccount:(id)account;
-(void)postProcessApplicationData;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
-(BOOL)deleteFromCalendar;
-(void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;
-(void)setCalEvent:(void*)event;
-(BOOL)loadCalRecordForAccount:(id)account;
-(void*)calEvent;
-(BOOL)saveServerIDToCalendar;
// inherited: -(void)loadClientIDs;
-(id)startDateForCalFramework;
-(id)endDateForCalFramework;
-(id)uidForCalFramework;
-(id)exceptionDate;
-(void)setExceptionDate:(id)date;
// in a protocol: -(nullable instancetype)initWithCoder:(NSCoder *)coder;
// in a protocol: -(void)encodeWithCoder:(id)coder;
-(BOOL)cachedOrganizerIsSelf;
-(id)fullOrganizerString;
-(BOOL)purgeAttendeesPendingDeletion;
-(BOOL)hasOccurrenceInTheFuture;
// in a protocol: -(BOOL)saveWithLocalObject:(void*)localObject toContainer:(void*)container treatNullsAsDeletes:(BOOL)deletes account:(id)account;
// in a protocol: -(BOOL)saveAfterMapWithLocalObject:(void*)localObject toContainer:(void*)container treatNullsAsDeletes:(BOOL)deletes account:(id)account;
// in a protocol: -(BOOL)hasLocalModificationsWithLocalObject:(void*)localObject;
// in a protocol: -(void)setLocalItem:(void*)item;
// in a protocol: -(BOOL)loadLocalItemWithAccount:(id)account;
// in a protocol: -(BOOL)saveServerIDToExistingItem;
// in a protocol: -(BOOL)deleteFromContainer:(void*)container;
-(void)setCalculateNextStatusAsIfMeetingRequest:(BOOL)request;
-(void)setShouldUpdateStatus:(BOOL)updateStatus;
-(BOOL)_selfIsMoreCorrectThanOtherEvent:(id)event;
-(BOOL)isEqualToEvent:(id)event;
-(id)eventByMergingInLosingEvent:(id)losingEvent;
-(id)eventByMergingInEvent:(id)event;
@end

