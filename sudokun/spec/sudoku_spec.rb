require 'spec_helper'

describe Sudoku do
  before(:each) do
    @sud = Sudoku.new
  end
  it "check_row" do
    result = @sud.check_row([2,3,5,7],6)
    expect(result).to eq(false)
  end
  it "check column" do
    result = @sud.check_col([1,2,3,4],2)
    expect(result).to eq(true)
  end
end
