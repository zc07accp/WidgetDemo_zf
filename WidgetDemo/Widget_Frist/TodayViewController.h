//
//  TodayViewController.h
//  CalendarWidget
//
//  Created by zf on 2016/10/20.
//  Copyright © 2016年 Apricot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TodayViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *weekNameContainerView;
@property (weak, nonatomic) IBOutlet UIView *detailContainerView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIButton *LastMonthButton;
@property (weak, nonatomic) IBOutlet UIButton *NextMonthButton;


@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *labelArr;

@property (nonatomic,strong)NSDate * date;
- (IBAction)intoLastMonth:(id)sender;
- (IBAction)intoNextMonth:(id)sender;

@end
