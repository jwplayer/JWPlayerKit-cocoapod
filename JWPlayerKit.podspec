Pod::Spec.new do |s|

  s.name         = "JWPlayerKit"
  s.version      = "4.23.2"
  s.summary      = "A versatile video playback SDK for iOS with support for HLS, VAST advertising, and player UI customization."

  s.homepage     = "https://www.jwplayer.com/mobile-sdk/"
  s.license      = { :type => "Commercial", :file => "LICENSE.md" }

  s.authors      = { "JW Player" => "support@jwplayer.com" }

  s.platform     = :ios, "15.0"
  s.documentation_url = "https://developer.jwplayer.com/sdk/ios/docs/developer-guide/"
  s.changelog    = "https://releases.jwplayer.com/"
  s.source       = { :git => "https://github.com/jwplayer/JWPlayerKit-cocoapod.git", :tag => s.version.to_s }

  s.ios.vendored_frameworks = "JWPlayerKit.xcframework"

  s.social_media_url = 'https://www.facebook.com/jwplayer/'
  s.social_media_url = 'https://x.com/jwplayer'
  s.social_media_url = 'https://x.com/jwpsupport'

  s.requires_arc = true

  s.description = <<-DESC
    A powerful SDK for building better viewer experiences on iPhone & iPad.

    JWPlayerKit includes native classes and methods to enable developers to integrate 
    HLS video playback, VAST advertising, player UI customization, and advanced 
    video features directly into their mobile applications. Designed to help you 
    expand your app's reach to billions of users worldwide.
  DESC

end
