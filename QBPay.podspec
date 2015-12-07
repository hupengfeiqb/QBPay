Pod::Spec.new do |s|
  s.name             = “QBPay”
  s.version          = "1.0.0"
  s.summary          = “QBPay FrameWork”
  s.description      = <<QBPay FrameWork

  s.homepage         = "https://github.com/hupengfeiqb/QBPay"
  
  s.license          = 'MIT'
  s.author           = { "胡鹏飞" => "hupf@qianbao.com" }
  s.source           = { :git => "https://github.com/hupengfeiqb/QBPay.git", :tag => s.version.to_s }
  

  s.platform     = :ios, '7.0'
  s.requires_arc = true
  s.source_files = 'QBPay/*'
  s.frameworks = 'Foundation', 'CoreGraphics', 'UIKit'

end
