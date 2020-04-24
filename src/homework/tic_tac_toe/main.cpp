#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<memory>

using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;

int main()
{
	unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>();
	
	string cont;
	std::vector<std::unique_ptr <tictactoe>>games;

	do
	{
		int game_type;
		cout << "\n Tictactoe 3 or 4?";
		cin >> game_type;
		unique_ptr<tictactoe3> game3 = make_unique<tictactoe3>();
		unique_ptr<tictactoe4> game4 = make_unique<tictactoe4>();

		if (game_type == 3)
		{
			std::move(game3);
		}
		else if (game_type == 4)
		{
			std::move(game4);
		}
		std::unique_ptr <tictactoe>game;
		string player = "Y";

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				game->start_game(player);
			}
			catch (Invalid e)
			{
				cout << e.get_error();
			}
		}

		int choice = 1;

		do
		{
			try
			{
				cin >> *game;
				cout << game;
			}
			catch (Invalid e)
			{
				cout << e.get_error();
			}

		} while (!game->game_over());

		manager->save_game(game);

		cout << "\nWinner: " << game->get_winner() << "\n";

		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y" || cont == "y");

	cout << manager;

	return 0;
}