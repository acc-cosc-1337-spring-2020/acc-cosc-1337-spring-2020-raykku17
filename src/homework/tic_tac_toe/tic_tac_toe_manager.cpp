#include "tic_tac_toe_manager.h"

//cpp

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (auto& game : manager.games)
	{
		out << *game;
	}

	out << "\n\nO wins: " << manager.o_win << "\n";
	out << "X wins: " << manager.x_win << "\n";
	out << "Ties  : " << manager.tie << "\n";

	return out;
}

TicTacToeManager::TicTacToeManager(tictactoedata & data)
{
	data.get_games();
	for (auto &game : data.get_games)
	{
		update_winner_count(data.get_winner);
	}
}

void TicTacToeManager::save_game(std::unique_ptr<tictactoe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b));
}

TicTacToeManager::~TicTacToeManager()
{
	tictactoedata* saved_games;
	saved_games->save_games;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win =x_win +1;
	}
	else if (winner == "O")
	{
		o_win = o_win + 1;
	}
	else
	{
		tie = tie + 1;
	}
}
