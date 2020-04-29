//h
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
class tictactoe3 : public tictactoe
{
public:
	tictactoe3(std::vector<string> p, string win) :tictactoe( p, win ) {}
	tictactoe3() : tictactoe(3) {}

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};

#endif //!TIC_TAC_TOE_3_H