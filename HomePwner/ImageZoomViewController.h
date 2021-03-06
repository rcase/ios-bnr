//
//  ImageZoomViewController.h
//  HomePwner
//
//  Created by Ryan Case on 9/27/13.
//  Copyright (c) 2013 Ryan Case. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageZoomViewController : UIViewController <UIScrollViewDelegate>
{
    __weak IBOutlet UIScrollView *scrollView;
    __weak IBOutlet UIImageView *imageView;
}
@property (nonatomic, strong) UIImage *image;

@end
