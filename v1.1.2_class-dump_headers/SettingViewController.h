/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "XXEncryptedProtocol_54554.h"
#import "XXEncryptedProtocol_544dc.h"
#import "XXEncryptedProtocol_54504.h"
#import <UIKit/UIViewController.h>
#import "XXEncryptedProtocol_5452c.h"


__attribute__((visibility("hidden")))
@interface SettingViewController : UIViewController <XXEncryptedProtocol_544dc, XXEncryptedProtocol_54504, XXEncryptedProtocol_5452c, XXEncryptedProtocol_54554> {
@private
	? settingView;
	? autoCompleteCharsLabel;
	? alert;
}
-(?)applicationDidEnterBackground:(?)application;
-(?)tabBarControllerViewFrameChanged:(?)changed;
-(?)sendMail:(?)mail;
-(?)alertView:(?)view clickedButtonAtIndex:(?)index;
-(?)mailComposeController:(?)controller didFinishWithResult:(?)result error:(?)error;
-(?)displayComposerSheet;
-(?)confirmLaunchMailApp;
-(?)autoCompleteValueChanged:(?)changed;
-(?)fontSizeValueChanged:(?)changed;
-(?)showsRubyValueChanged:(?)changed;
-(?)tableView:(?)view didSelectRowAtIndexPath:(?)indexPath;
-(?)tableView:(?)view cellForRowAtIndexPath:(?)indexPath;
-(?)tableView:(?)view numberOfRowsInSection:(?)section;
-(?)numberOfSectionsInTableView:(?)tableView;
-(?)viewDidUnload;
-(?)didReceiveMemoryWarning;
-(?)viewWillAppear:(?)view;
-(?)viewDidLoad;
-(?)loadView;
-(?)dealloc;
@end

