Pod::Spec.new do |s|

  s.name         = "JWPlayerKit"
  s.version      = "4.28.2"
  s.summary      = "FINAL CocoaPods release of JWPlayerKit. Future versions ship via Swift Package Manager only."

  s.homepage     = "https://www.jwplayer.com/mobile-sdk/"
  s.license      = { :type => "Commercial", :file => "LICENSE.md" }

  s.authors      = { "JW Player" => "support@jwplayer.com" }

  s.platform     = :ios, "15.0"
  s.documentation_url = "https://docs.jwplayer.com/players/docs/ios-add-the-sdk"
  s.changelog    = "https://releases.jwplayer.com/"
  s.source       = { :git => "https://github.com/jwplayer/JWPlayerKit-cocoapod.git", :tag => s.version.to_s }

  s.ios.vendored_frameworks = "JWPlayerKit.xcframework"

  s.social_media_url = 'https://www.facebook.com/jwplayer/'
  s.social_media_url = 'https://x.com/jwplayer'
  s.social_media_url = 'https://x.com/jwpsupport'


  s.requires_arc = true

  # Prints a deprecation warning on every `pod install` / `pod update` that resolves this version.
  s.deprecated = true

  s.description = <<-DESC
    FINAL COCOAPODS RELEASE. This is the last JWPlayerKit version published to CocoaPods.
    Future versions are only available through Swift Package Manager:
    https://github.com/jwplayer/JWPlayerKit-package.git
    Migration guide: https://docs.jwplayer.com/players/docs/ios-add-the-sdk

    A powerful SDK for building better viewer experiences on iPhone & iPad.

    JWPlayerKit includes native classes and methods to enable developers to integrate
    HLS video playback, VAST advertising, player UI customization, and advanced
    video features directly into their mobile applications. Designed to help you
    expand your app's reach to billions of users worldwide.
  DESC

end
