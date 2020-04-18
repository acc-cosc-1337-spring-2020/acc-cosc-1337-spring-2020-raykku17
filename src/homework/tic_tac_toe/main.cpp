#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

#include <iostream>
using std::cout; using std::cin;
int main()
{

	tictactoe start;
	TicTacToeManager winner;
	char choice;
	string letter;
	int mark;
	auto player = start.get_player();
	int size;
	bool gamestate = true;
	do
	{
		cout << "Player One select gamesize 3 or 4 " << "\n";
		cin >> size;
		do
		{
			if (size == 3)
			{
				tictactoe3 game3;
				try
				{
					cout << "Player One select X or O " << "\n";
					cin >> player;
					game3.start_game(player);
				}
				catch (Invalid e)
				{
					cout << e.get_error() << "\n";
				}
				do
				{
					
					cout << game3;
					cin >> game3;
					game3.game_over();

				} while (game3.game_over() == false);
				{
					winner.save_game(game3);
					cout << game3;
					cout << "winner is " << game3.get_winner() << "\n";
					cout << winner;
				}

				
			}
			else if (size == 4)
			{
				tictactoe4 game4;
				try
				{
					cout << "Player One select X or O " << "\n";
					cin >> player;
					game4.start_game(player);
				}
				catch (Invalid e)
				{
					cout << e.get_error() << "\n";
				}
				do
				{
					cout << game4;
					cin >> game4;
					game4.game_over();

				} while (game4.game_over() == false);
				{
					winner.save_game(game4);
					cout << game4;
					cout << "winner is " << game4.get_winner() << "\n";
					cout << winner;
				}
				cout << winner;
			}

		} while (!(size == 3 || size == 4));
		{

		}


		cout << "continue? Y or N.";
		cin >> choice;


	} while (choice == 'Y' || choice == 'y');
	{

	}


	return 0;
}