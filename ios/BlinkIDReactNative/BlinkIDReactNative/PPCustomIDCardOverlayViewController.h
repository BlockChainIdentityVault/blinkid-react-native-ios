//
//  PPCustomIDCardOverlayViewController.h
//  BlinkIDReactNative
//
//  Created by Greyson Hensley on 7/14/17.
//  Copyright © 2017 Jura Skrlec. All rights reserved.
//

#ifndef PPCustomIDCardOverlayViewController_h
#define PPCustomIDCardOverlayViewController_h

#endif /* PPCustomIDCardOverlayViewController_h */

@interface PPCustomIDCardOverlayViewController : PPIDCardOverlayViewController

- (void)setTooltip: (NSString*) tooltipText;
- (void)setBoxRatio: (CGFloat) boxRatio;

@property (nonatomic) CGFloat boxRatio;
@property (nonatomic, strong) NSString *tooltipText;

@end
