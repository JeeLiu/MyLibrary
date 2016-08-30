#
# Be sure to run `pod lib lint elements.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'BabyColorSDK'
  s.version          = '0.1.4'
  s.summary          = 'elements provides a full UX on top of Tapglue'
  s.license          = 'Apache License, Version 2.0'
  s.author           = { 'Tapglue' => 'devs@tapglue.com' }
  s.source           = { :git => 'https://github.com/tapglue/elements-ios.git', :tag => "v#{s.version}" }

  s.homepage = 'https://developers.tapglue.com/docs/ios'
  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.resources = 'BabyColorSDK/BabyColorSDK.framework/*.{bundle, ttf, icns, mpq}'

  s.ios.preserve_paths      = 'BabyColorSDK/BabyColorSDK.framework'

  s.ios.public_header_files  = 'BabyColorSDK/BabyColorSDK.framework/Headers/*.h'

  s.ios.vendored_frameworks  = 'BabyColorSDK/BabyColorSDK.framework'

  s.ios.vendored_libraries = 'BabyColorSDK/BabyColorSDK.framework/Frameworks/*.dylib'

  s.ios.module_map = 'BabyColorSDK/BabyColorSDK.framework/Modules/*.{modulemap, swiftmodule}'

  s.frameworks = 'SystemConfiguration', 'AVFoundation', 'CoreTelephony', 'AudioToolbox', 'CoreMedia' , 'VideoToolbox' , 'WebKit', 'StoreKit', 'MobileCoreServices' , 'UIKit'
  
  s.libraries = 'sqlite3.0', 'z', 'stdc++.6.0.9'
  s.dependency 'ReactiveCocoa'
  s.dependency 'TPKeyboardAvoiding'
  s.dependency 'Alamofire'
  s.dependency 'ObjectMapper'
  s.dependency 'Cartography'
  s.dependency 'CryptoSwift'
  s.dependency 'SDWebImage'
  s.dependency 'Toast', '~> 2.4'
  s.dependency 'SVProgressHUD', '~> 1.1.2'
  s.dependency 'M80AttributedLabel', '~> 1.3.1'
  s.dependency 'FMDB'
  s.dependency 'Reachability', '~> 3.1.1'
  s.dependency 'SKPhotoBrowser'
  s.dependency 'MBProgressHUD'
  s.dependency 'Popover'

end
