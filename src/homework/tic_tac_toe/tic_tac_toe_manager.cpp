#include "tic_tac_toe_manager.h"

//cpp

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	int x_win{ 0 }, o_win{ 0 }, tie{ 0 };
	for (auto& game : manager.games)
	{
		out << game;
		if (game.get().get_winner()== "X")
		{
			x_win = x_win + 1;
		}
		else if (game.get().get_winner() == "O")
		{
			o_win = o_win + 1;
		}
		else
		{
			tie=tie+1;
		}
		out << "X wins: " << x_win << ", O wins: " << o_win << ", ties: " << tie << "\n";
	}
	return out;
}

void TicTacToeManager::save_game(tictactoe b)
{
	games.push_back(b);
	update_winner_count(get_winner());
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
