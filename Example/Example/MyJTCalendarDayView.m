//
//  MyJTCalendarDayView.m
//  Example
//
//  Created by Washington on 23/5/15.
//  Copyright (c) 2015 Jonathan Tribouharet. All rights reserved.
//

#import "MyJTCalendarDayView.h"

@implementation MyJTCalendarDayView

-(void)setDate:(NSDate *)date {
    [super setDate:date];
    NSLog(@"%@", date);
}

@end
