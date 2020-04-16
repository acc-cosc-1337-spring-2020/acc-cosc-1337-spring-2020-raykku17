//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include <iostream>
#include <vector>
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"

class TicTacToeManager: public tictactoe
{
public:
	
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
	void save_game(tictactoe b);
private:
	std::vector<std::reference_wrapper <tictactoe>>games;
	int o_win{ 0 };
	int x_win{ 0 };
	int tie{ 0 };
	void update_winner_count(std::string winner);

};


#endif //!TIC_TAC_TOE_MANAGER_H