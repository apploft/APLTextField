APLTextField
=========

Advanced UITextField subclass with the possibility to be connected to a picker. Text Field can be configured with a list of options which will be presented in a picker view instead of showing a keyboard.

Supports:

* UIDatePicker and UIPickerView
* text field clearance with "select none" option
* preselection
* left image icon

## Installation
Install via cocoapods by adding this to your Podfile:

	pod "APLTextField", "~> 0.0.2"

## Usage
Import header file:

	#import "APLTextField.h"
	
### Standard Picker
	
Initialize your APLTextField Intance as text field with UIPickerView as inputView:

	yourTextField.pickerOptions = @[@"A", @"B", @"C"];
	
To set the value of the text field, don't use yourTextField.text but:

	[yourTextField setAndSelectText:@"C"];
	
### Date Picker
	
Initialize your APLTextField Intance as text field with UIDatePicker as inputView:

	dateTextField.hasDatePicker = YES;
	
To set the value, don't use dateTextField.text but:

	[dateTextField setAndSelectDate:[NSDate date]];

Get the date by calling:

	NSDate* date = [dateTextField getDate];
