Pod::Spec.new do |spec|
   spec.name         = "ROC_NEO_SDK"
   spec.version      = "1.0.0"
   spec.summary      = "A short description of ROC_NEO_SDK."
   spec.description  = "A short description of a ROC_NEO_SDK"

   spec.homepage     = "https://github.com/976971956/ROC_NEO_SDK"
   spec.license      = { :type => "MIT", :file => "LICENSE" }
   spec.author             = { "jianghuli" => "976971956@qq.com" }
   spec.platform     = :ios, "9.0"
   spec.source       = { :git => "https://github.com/976971956/ROC_NEO_SDK.git", :tag => "1.0.0" }
   spec.resource  = "GNHYNeoMobi.bundle"
   spec.vendored_frameworks = 'GNHY_NeoMobiSDK.framework'
   spec.frameworks = "UIKit", "Foundation"
   spec.requires_arc = true
   spec.xcconfig = {'BITCODE_GENERATION_MODE' => 'bitcode'}
end
