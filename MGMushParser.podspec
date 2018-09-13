Pod::Spec.new do |s|
  s.name         = "MGMushParser"
  s.version      = "1.3.0"
  s.summary      = "Create NSAttributedStrings from NSStrings with lightweight Mush markup"
  s.homepage     = "https://github.com/sobri909/MGMushParser"
  s.license      = { :type => "BSD", :file => "LICENSE" }
  s.author       = { "Matt Greenfield" => "matt@bigpaua.com" }
  s.ios.deployment_target = '9.0'
  s.source       = { :git => "https://github.com/sobri909/MGMushParser.git", :tag => "1.3.0" }
  s.source_files = "MGMushParser/*.{h,m}"
  s.framework    = 'CoreText'  
  s.requires_arc = true
end

