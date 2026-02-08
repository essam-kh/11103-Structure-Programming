source 'https://rubygems.org'
gem 'github-pages', group: :jekyll_plugins
gem "webrick", "~> 1.8"
gem "csv"
gem "bigdecimal"

group :jekyll_plugins do
  gem "jekyll-last-modified-at"
end

# Fix for Ruby 4 compatibility (tainted? method)
require_relative "_plugins/00_ruby_patch.rb"
