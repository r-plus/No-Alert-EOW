/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIViewController.h>


__attribute__((visibility("hidden")))
@interface AdViewController : UIViewController {
@private
	? smartiAdView;
	? newAdView;
	? adView1;
	? adView2;
	? targetPoint;
	? targetView;
	? transitioning;
	? timer;
	? counter;
	? ads;
	? images;
	? currentAd;
	? networkQueue;
	? affiliateURL;
	? iTunesURL;
}
@property(assign) ? XXEncryptedProperty_41dd2;
@property(assign) ? XXEncryptedProperty_3ec50;
@property(assign) ? XXEncryptedProperty_3ec43;
@property(assign) ? XXEncryptedProperty_3ed78;
@property(assign) ? XXEncryptedProperty_3ec30;
@property(assign) ? XXEncryptedProperty_3ec26;
+(?)sharedViewController;
-(?)setITunesURL:(?)url;
-(?)iTunesURL;
-(?)setAffiliateURL:(?)url;
-(?)affiliateURL;
-(?)setNetworkQueue:(?)queue;
-(?)networkQueue;
-(?)setImages:(?)images;
-(?)images;
-(?)setAds:(?)ads;
-(?)ads;
-(?)setNewAdView:(?)view;
-(?)newAdView;
-(?)adViewTapped:(?)tapped;
-(?)alertView:(?)view clickedButtonAtIndex:(?)index;
-(?)connectionDidFinishLoading:(?)connection;
-(?)connection:(?)connection willSendRequest:(?)request redirectResponse:(?)response;
-(?)openReferralURL:(?)url;
-(?)requestFailed:(?)failed;
-(?)requestFinished:(?)finished;
-(?)nextTransition:(?)transition;
-(?)animationDidStop:(?)animation finished:(?)finished;
-(?)performTransition;
-(?)show;
-(?)showInView:(?)view;
-(?)setTargetPoint:(?)point inView:(?)view;
-(?)update;
-(?)didReceiveMemoryWarning;
-(?)viewDidLoad;
-(?)loadView;
-(?)dealloc;
@end

