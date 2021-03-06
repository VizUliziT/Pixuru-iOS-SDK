//
//  PSDKProductSelectViewController.h
//  PixuruSDK
//
//  Created by Skyler Whittlesey on 9/11/13.
//  Copyright (c) 2013 Skyler Whittlesey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iCarousel.h"

@class PSDKSegmentedShippingButton;

@interface PSDKProductSelectViewController : UIViewController <iCarouselDataSource, iCarouselDelegate, UIAlertViewDelegate>

@property (strong, nonatomic) iCarousel *carousel;

@property (strong, nonatomic) UIView *priceAndSizeView;
@property (strong, nonatomic) UILabel *priceLabel;
@property (strong, nonatomic) UILabel *interlabel;

@property (strong, nonatomic) UILabel *frameLabel;
@property (strong, nonatomic) UILabel *canvasLabel;
@property (strong, nonatomic) UILabel *metalLabel;
@property (strong, nonatomic) UILabel *woodLabel;
@property (strong, nonatomic) UILabel *otherLabel;

@property (strong, nonatomic) UIView *productImagesView;
@property (strong, nonatomic) UIButton *selectButton;
@property (strong, nonatomic) UIImageView *productImage;

@property (strong, nonatomic) UIView *productSelectorButtonView;
@property (strong, nonatomic) UIButton *frameButton;
@property (strong, nonatomic) UIButton *canvasButton;
@property (strong, nonatomic) UIButton *metalButton;
@property (strong, nonatomic) UIButton *woodButton;
@property (strong, nonatomic) UIButton *otherButton;

@property (strong, nonatomic) UIView *blankView;
@property (strong, nonatomic) UIImageView *blueArrow;
@property (strong, nonatomic) UIImageView *poweredPixView;

@property (strong, nonatomic) UISwitch *shippingSelector;

@end
