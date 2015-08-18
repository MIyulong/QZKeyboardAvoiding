//
//  UIScrollView+QZKeyboardAvoidingAdditions.h
//  QZKeyboardAvoiding
//
//  Created by Michael Tyson on 30/09/2013.
//  Copyright 2015 A Tasty Pixel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (QZKeyboardAvoidingAdditions)
- (BOOL)QZKeyboardAvoiding_focusNextTextField;
- (void)QZKeyboardAvoiding_scrollToActiveTextField;

- (void)QZKeyboardAvoiding_keyboardWillShow:(NSNotification*)notification;
- (void)QZKeyboardAvoiding_keyboardWillHide:(NSNotification*)notification;
- (void)QZKeyboardAvoiding_updateContentInset;
- (void)QZKeyboardAvoiding_updateFromContentSizeChange;
- (void)QZKeyboardAvoiding_assignTextDelegateForViewsBeneathView:(UIView*)view;
- (UIView*)QZKeyboardAvoiding_findFirstResponderBeneathView:(UIView*)view;
-(CGSize)QZKeyboardAvoiding_calculatedContentSizeFromSubviewFrames;
@end
