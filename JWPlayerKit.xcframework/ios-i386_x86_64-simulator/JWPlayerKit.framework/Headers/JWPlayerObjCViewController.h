//
//  JWPlayerObjCViewController.h
//  JWPlayer-iOS-SDK
//
//  Created by Stephen Seibert  on 5/14/21.
//  Copyright © 2021 JWPlayer. All rights reserved.
//

#ifndef JWPlayerObjCViewController_h
#define JWPlayerObjCViewController_h

#import <JWPlayerKit/JWPlayerKit-swift.h>
#import <AVKit/AVKit.h>

/**
 This is the Objective-C versions of `JWPlayerViewController`.
 */
@interface JWPlayerObjCViewController : UIViewController
<AVPictureInPictureControllerDelegate,
JWPlayerViewDelegate,
JWPlayerDelegate,
JWPlayerStateDelegate,
JWAVDelegate,
JWAdDelegate,
JWMediaMetadataDelegate,
JWCastDelegate,
JWTimeEventListener>

/// The JWPlayer interface, used to control playback and configure the player.
@property (nonatomic, readonly) id<JWPlayer> player;
/// The view containing the player.
@property (nonatomic, readonly) JWPlayerView *playerView;

/// The delegate to receive JWPlayerViewController events.
@property (nonatomic, weak, readwrite) id<JWPlayerViewControllerDelegate> delegate;

/// The behavior desired for the interface. By default, this is JWInterfaceBehaviorNormal.
@property (nonatomic, assign, readwrite) JWInterfaceBehavior interfaceBehavior;

/// If YES, the player will go full screen when rotated into landscape orientation. Defaults to `YES`.
@property (nonatomic, assign, readwrite) BOOL forceFullScreenOnLandscape;

/// If true, the player rotates into landscape when it goes into fullscreen. Defaults to `true`.
@property (nonatomic, assign, readwrite) BOOL forceLandscapeOnFullScreen;

/// The poster image to display when there is no Internet connection. By default, it displays the poster image of the current video.
@property (nonatomic, retain, readwrite) UIImage *offlinePosterImage;

/// The message to display when Internet connection is lost. By default it is "Internet Lost".
@property (nonatomic, retain, readwrite) NSString *offlineMessage;

/// The style used to customize the player.
@property (nonatomic, retain, readwrite) JWPlayerSkin *styling;

/// The style defining the Next Up card and its behavior. Defaults to nil (no card).
@property (nonatomic, retain, readwrite) JWNextUpStyle *nextUpStyle;

/// Sets a custom logo to display on the player.
@property (nonatomic, retain, readwrite) JWLogo *logo;

/**
 The number of seconds to wait when fading the interface. The default is 3 seconds.
 - note: This only applies when `interfaceBehavior` is JWInterfaceBehaviorNormal..
 */
@property (nonatomic, assign, readwrite) NSTimeInterval interfaceFadeDelay;

/**
 Available playback rates.

 This property is automatically sorted. If an empty array is specified, 1.0 becomes the only available option. Rates must be greater than 0 and less than or equal to 4.0. Invalid rates are removed from the array.

 The default rates are: [0.5, 1.0, 1.25, 1.5, 2.0]
 */
@property (nonatomic, assign) NSArray<NSNumber *> *playbackRates;

/// The desc the player is initialized with for the ad interface.
@property (nonatomic, retain) JWAdInterfaceStyle *adInterfaceStyle;

/**
 It enables the lock screen controls to be synchronized with the player. The default is `true`.
 */
@property (nonatomic, assign) BOOL enableLockScreenControls;

@end

#endif /* JWPlayerObjCViewController_h */
