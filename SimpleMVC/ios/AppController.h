//
//  SimpleMVCAppController.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright guangshun 2012. All rights reserved.
//

@class RootViewController;

@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate,UIApplicationDelegate> {
    UIWindow *window;
    RootViewController	*viewController;
}

@end

