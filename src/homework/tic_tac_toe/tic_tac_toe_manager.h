//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include <iostream>
#include <memory>
#include <vector>
#include "tic_tac_toe.h"

class TicTacToeManager
{
public:
	TicTacToeManager() = default;
	TicTacToeManager(tictactoedata& data);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
	void save_game(std::unique_ptr<tictactoe>& b);
	~TicTacToeManager();
private:
	std::vector<std::unique_ptr <tictactoe>>games;
	int o_win{ 0 };
	int x_win{ 0 };
	int tie{ 0 };
	void update_winner_count(std::string winner);
	tictactoedata data;
};


#endif //!TIC_TAC_TOE_MANAGER_H