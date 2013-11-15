//
//  APLTextField.h
//
//  Created by Michael Kamphausen on 06.05.13.
//  Copyright (c) 2013 apploft GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface APLTextField : UITextField

@property (nonatomic, strong) NSArray* pickerOptions;
@property (nonatomic, copy) NSString* selectNonePickerOption;
@property (nonatomic) NSInteger selectedPickerOption;
@property (nonatomic, assign) BOOL hasDatePicker;
@property (nonatomic, assign) NSUInteger maxCharacters;

- (void)setAndSelectText:(NSString*)text;
- (void)setAndSelectDate:(NSDate*)date;
- (NSDate*)getDate;
- (void)setLeftImage:(NSString*)name;

@end
