Pod::Spec.new do |s|
  s.name         = "MGMushParser"
  s.version      = "1.2.1"
  s.summary      = "Create NSAttributedStrings from NSStrings with lightweight Mush markup"
  s.homepage     = "https://github.com/sobri909/MGMushParser"
  s.license      = { :type => "BSD", :file => "LICENSE" }
  s.author       = { "Matt Greenfield" => "matt@bigpaua.com" }
  s.platform     = :ios, "6.0"
  s.source       = { :git => "https://github.com/sobri909/MGMushParser.git", :tag => "1.2.1" }
  s.source_files = "MGMushParser/*.{h,m}"
  s.framework    = 'CoreText'  
  s.requires_arc = true
end

