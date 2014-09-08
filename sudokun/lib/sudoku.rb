class Sudoku
  def initialize
    @input = Array.new(8) {Array.new(8) {0} }
  end
  def check_input
    @input.each_with_index do |x , xi|
      @input.each_with_index do |y , yi|
        until @input[xi][yi] >0
          if check_row(x,@input[xi][yi]) && check_col(y,@input[xi][yi]) && check_block(xi,yi,@input[xi][yi])
            valid = true
          else 
            return false
          end
        end
      end
    end
    return valid
  end
  def sudoku_solver
    @input.each_with_index do |x, xi|
      @input.each_with_index do |y, yi|
        until @input[xi][yi].equal? 0
          if check_row(x,@input[xi][yi]) && check_col(y,@input[xi][yi]) && check_block(xi,yi,@input[xi][yi])
       
          end
        end
      end
    end
  end

  def check_row(row , value)
    return row.include?(value)
  end
  def check_col(col ,value)
    return col.include?(value)
  end
    
end

