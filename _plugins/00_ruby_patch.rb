# frozen_string_literal: true

# This is a monkey patch to fix "undefined method 'tainted?'" errors
# in older Jekyll/Liquid versions running on Ruby 3.2+
# where tainted? was removed.

class Object
  def tainted?
    false
  end

  def untaint
    self
  end
end
