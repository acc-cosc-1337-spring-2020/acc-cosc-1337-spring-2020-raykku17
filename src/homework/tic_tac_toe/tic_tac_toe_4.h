//h
#include "tic_tac_toe.h"
class tictactoe4 : public tictactoe
{
public:
	tictactoe4() = default;
	tictactoe4(int s) : tictactoe(4) {}

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};