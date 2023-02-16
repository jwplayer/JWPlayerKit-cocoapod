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
 This is the Objective-C version of `JWPlayerViewController`.
 */
@interface JWPlayerObjCViewController : UIViewController
<AVPictureInPictureControllerDelegate,
JWPlayerViewDelegate,
JWPlayerDelegate,
JWPlayerStateDelegate,
JWAVDelegate,
JWAdDelegate,
JWAirPlayDelegate,
JWAccessLogMetadataDelegate,
JWDateRangeMetadataDelegate,
JWID3MetadataDelegate,
JWExternalMetadataDelegate,
JWProgramDateTimeMetadataDelegate,
JWMediaMetadataDelegate,
JWCastDelegate,
JWTimeEventListener>

/// The JWPlayer interface, used to control playback and configure the player.
@property (nonatomic, readonly) id<JWPlayer> player;
/// The view containing the player.
@property (nonatomic, readonly) JWPlayerView *playerView;

/// The delegate to receive JWPlayerViewController events.
@property (nonatomic, weak, readwrite) id<JWPlayerViewControllerDelegate> delegate;

/// The behavior desired for the interface. The default value is JWInterfaceBehaviorNormal.
@property (nonatomic, assign, readwrite) JWInterfaceBehavior interfaceBehavior;

/// If YES, the player will go full screen when rotated into landscape orientation. The default value is YES.
@property (nonatomic, assign, readwrite) BOOL forceFullScreenOnLandscape;

/// If true, the player rotates into landscape when it goes into fullscreen. The default value is YES.
@property (nonatomic, assign, readwrite) BOOL forceLandscapeOnFullScreen;

/// The poster image to display when there is no Internet connection. By default, it displays the poster image of the current video.
@property (nonatomic, retain, readwrite) UIImage *offlinePosterImage;

/**
 The message that is displayed when the internet connection is lost.
 
 The default value is "This video cannot be played because of a problem with your internet connection." which corresponds to the localizable string [jwplayer_errors_bad_connection].
 */
@property (nonatomic, retain, readwrite) NSString *offlineMessage;

/// The style used to customize the player.
@property (nonatomic, retain, readwrite) JWPlayerSkin *styling;

/// The style defining the Next Up card and its behavior. The default value is nil (no card).
@property (nonatomic, retain, readwrite) JWNextUpStyle *nextUpStyle;

/// Sets a custom logo to display on the player.
@property (nonatomic, retain, readwrite) JWLogo *logo;

/**
 The number of seconds to wait when fading the interface. The default value is 3 seconds.
 
 @discussion
 This only applies when interfaceBehavior is JWInterfaceBehaviorNormal..
 */
@property (nonatomic, assign, readwrite) NSTimeInterval interfaceFadeDelay;

/**
 Available playback rates. The default rates are: [0.5, 1.0, 1.25, 1.5, 2.0]
 
 @discussion
 This property is automatically sorted. If an empty array is specified, 1.0 becomes the only available option. Rates must be greater than 0 and less than or equal to 4.0. Invalid rates are removed from the array.
 */
@property (nonatomic, assign) NSArray<NSNumber *> *playbackRates;

/// The desc the player is initialized with for the ad interface.
@property (nonatomic, retain) JWAdInterfaceStyle *adInterfaceStyle;

/// It enables the lock screen controls to be synchronized with the player. The default is YES.
@property (nonatomic, assign) BOOL enableLockScreenControls;

/// A Boolean value that determines whether the player view allows Picture in Picture playback. The default value is YES.
@property (nonatomic, assign, readwrite) BOOL allowsPictureInPicturePlayback;

/// Returns YES if the player is currently in fullscreen mode, and NO if it is not.
@property (nonatomic, assign, readonly) BOOL isFullscreen;

/**
 This method transitions the player to fullscreen mode.
 
 @discussion
 If the player is already in fullscreen mode this method does not perform any actions, and the completion closure will not be executed.
 
 @param animated Set to true if the player should animate into full screen.
 @param completion This closure is called when the player is done transitioning to full screen mode.
*/
- (void)transitionToFullScreenAnimated:(BOOL)animated completion:(void (^)(void))completion;
/**
 This method transitions the player away from fullscreen mode.
 
 @discussion
 If the player is not in fullscreen mode this method does not perform any actions, and the completion closure will not be executed.
 
 @param animated Set to true if the player should animate away from full screen mode.
 @param completion This closure is called when the player is done transitioning away from full screen mode.
*/
- (void)dismissFullScreenAnimated:(BOOL)animated completion:(void (^)(void))completion;

/**
 Sets the visibility of controls on the player's interface.
 
 @discussion
 Use the `JWControlType` enum to initialize a `NSNumber` object with the desired control type.
 
 @code
 [controller setVisibility:FALSE forControls:@[@(JWControlTypePictureInPictureButton)]]
 @endcode
 
 @param isVisible The desired visibility of each control that is provided.
 @param controls The controls to set the visibility of.
 */
- (void)setVisibility:(BOOL)isVisible forControls:(NSArray<NSNumber *> * _Nonnull)controls;

@end

#endif /* JWPlayerObjCViewController_h */
