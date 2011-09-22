//
//  OpenWatchViewController.h
//  OpenWatch
//
//  Created by micah on 9/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/UTCoreTypes.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface OpenWatchViewController : UIViewController <UIImagePickerControllerDelegate> {
    UIImagePickerController* imagePickerController;
    UILabel *loadingLabel;
    UIButton *recordVideoButton;
}

@property (nonatomic, retain) IBOutlet UIButton *recordVideoButton;
@property (nonatomic, retain) IBOutlet UIImagePickerController *imagePickerController;
@property (nonatomic, retain) IBOutlet UILabel *loadingLabel;

- (IBAction)onRecordVideo:(id)sender;

@end
