Pod::Spec.new do |s|
s.name             = "Inti"
s.version          = "0.0.1"
s.summary          = "Inti is the first networking library with persistency in it's core"
s.homepage         = "https://github.com/NSElvis/Inti"
s.license          = 'MIT'
s.author           = { "Elvis Nuñez" => "hello@nselvis.com" }
s.source           = { git: "https://github.com/NSElvis/Inti.git", tag: s.version.to_s }
s.social_media_url = 'https://twitter.com/NSElvis'

s.platform         = :ios, '7.0'
s.requires_arc     = true

s.source_files     = 'Source/**/*'
end
