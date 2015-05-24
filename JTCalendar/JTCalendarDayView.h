//
//  JTCalendarDayView.h
//  JTCalendar
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

#import "JTCalendar.h"

@protocol JTCalendarDayView <NSObject>

-(void)setCalendarManager:(JTCalendar*)calendarManager;
-(JTCalendar*)calendarManager;

-(void)setDate:(NSDate*)date;
-(NSDate*)date;

-(void)setIsOtherMonth:(BOOL)isOtherMonth;
-(BOOL)isOtherMonth;

- (void)reloadData;
- (void)reloadAppearance;

@end

@interface JTCalendarDayView : UIView <JTCalendarDayView>

@property (weak, nonatomic) JTCalendar *calendarManager;

@property (nonatomic) NSDate *date;
@property (assign, nonatomic) BOOL isOtherMonth;

- (void)reloadData;
- (void)reloadAppearance;

@end
