
#
# Be sure to run `pod lib lint TakiSDK.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "TakiSDK"
  s.version          = "0.0.1"
  s.summary          = "Framework TakiSDK."
  s.homepage         = "https://github.com/indigotech/taki"
  s.license          = 'Commercial'
  s.author           = ["Taqtile"]
  s.source           = { :git => "https://github.com/indigotech/taki.git", :tag => s.version.to_s }


  s.platform     = :ios, '10.0'
  s.requires_arc = true

  s.vendored_frameworks = 'TakiSDK/TakiSDK.framework', 'TakiSDK/CryptoSwift.framework', 'TakiSDK/JWT.framework', 'TakiSDK/Mustache.framework'

end
