//
//  CPaymentConfirmVC.h
//  Skytaxi
//
//  Created by meixiang wu on 2018/4/4.
//  Copyright © 2018 meixiang wu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BookModel.h"
#import <MessageUI/MessageUI.h>

@interface CPaymentConfirmVC : UIViewController<MFMailComposeViewControllerDelegate>
@property (weak, nonatomic) IBOutlet UIScrollView *mScrollView;
@property (weak, nonatomic) IBOutlet UIView *mContentView;
@property (weak, nonatomic) IBOutlet UILabel *mPriceLabel;
@property (weak, nonatomic) IBOutlet UILabel *mDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *mPaxLabel;
@property (weak, nonatomic) IBOutlet UILabel *mPaidLabel;
//details
@property (weak, nonatomic) IBOutlet UILabel *mFromTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *mToTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *mDepartName;
@property (weak, nonatomic) IBOutlet UILabel *mDepartAddress;
@property (weak, nonatomic) IBOutlet UILabel *mDestTitle;
@property (weak, nonatomic) IBOutlet UILabel *mDestName;
@property (weak, nonatomic) IBOutlet UILabel *mDestAddress;
//return details
@property (weak, nonatomic) IBOutlet UIView *mReturnInfoView;
@property (weak, nonatomic) IBOutlet UILabel *rtFromTime;
@property (weak, nonatomic) IBOutlet UILabel *rtToTime;
@property (weak, nonatomic) IBOutlet UILabel *mPickupTitle;
@property (weak, nonatomic) IBOutlet UILabel *rtDepartName;
@property (weak, nonatomic) IBOutlet UILabel *rtDepartAddress;
@property (weak, nonatomic) IBOutlet UILabel *rtDestName;
@property (weak, nonatomic) IBOutlet UILabel *rtDestAddress;
//pilot details & button
@property (weak, nonatomic) IBOutlet UIView *mNextView;
@property (weak, nonatomic) IBOutlet UILabel *pilotName;
@property (weak, nonatomic) IBOutlet UILabel *mBookingIDLabel;
@property (weak, nonatomic) IBOutlet UIButton *mBackBtn;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *mHeightConst;
@property (weak, nonatomic) IBOutlet UILabel *mMsgLabel;

@property (nonatomic, strong) BookModel* data;
@property (nonatomic) NSInteger type;

- (IBAction)onBackClick:(id)sender;
- (IBAction)onSendEmailClick:(id)sender;
- (IBAction)onNewSeachClick:(id)sender;
- (IBAction)onContactClick:(id)sender;

@end
