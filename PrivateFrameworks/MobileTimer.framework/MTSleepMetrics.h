/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTSleepMetrics : NSObject {
    <MTAlarmStorage> * _alarmStorage;
    HKObserverQuery * _healthObserver;
    HKHealthStore * _healthStore;
    <NAScheduler> * _serializer;
    NSMutableSet * _sleepDataObservers;
}

@property (nonatomic, retain) <MTAlarmStorage> *alarmStorage;
@property (nonatomic, retain) HKObserverQuery *healthObserver;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) NSMutableSet *sleepDataObservers;

+ (id)_sharedPublicMetrics;
+ (id)inBedSampleWithInterval:(id)arg1 metadata:(id)arg2;
+ (void)registerSleepDataObserver:(id)arg1;
+ (id)sleepDataForPastWeek;
+ (id)sleepDataForRange:(id)arg1;
+ (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2;
+ (void)unregisterSleepDataObserver:(id)arg1;

- (void).cxx_destruct;
- (bool)_queue_hasUnprocessedIntervals;
- (void)_queue_setUnprocessedInBedIntervals:(id)arg1;
- (id)_queue_unprocessedInBedIntervals;
- (void)_saveTimeInBedSampleToHealthStore;
- (id)alarmStorage;
- (void)deviceFirstUnlocked;
- (id)healthObserver;
- (id)healthStore;
- (id)initWithAlarmStorage:(id)arg1;
- (void)logUserWentToBed:(id)arg1;
- (void)logUserWokeUp:(id)arg1;
- (void)registerSleepDataObserver:(id)arg1;
- (void)saveTimeInBed;
- (id)serializer;
- (void)setAlarmStorage:(id)arg1;
- (void)setHealthObserver:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSleepDataObservers:(id)arg1;
- (id)sleepDataForPastWeek;
- (id)sleepDataForRange:(id)arg1;
- (id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2;
- (id)sleepDataObservers;
- (void)sleepMonitor:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepMonitor:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 sleepAlarm:(id)arg3;
- (void)unregisterSleepDataObserver:(id)arg1;

@end