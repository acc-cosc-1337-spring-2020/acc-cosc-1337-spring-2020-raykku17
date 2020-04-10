#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
using std::cin; using std::cout;
int main() 
{
	tictactoe game;
	TicTacToeManager manager;
	char choice;
	string letter;

	int player;
	bool win= false;


	do
	{
		do
		{
			player = 1;
			cout << "Enter X or O: ";
			cin >> letter;
			try
			{
			game.start_game(letter);
			}
			catch (Invalid e)
			{
				cout << e.get_error() << "\n";
				player = 0;
			}
		} while (player != 1);
	
		do
		{
	
		
			cout << game;
			cin >> game;
			game.game_over();

		
		} while (game.game_over() == false );
		cout << game;
		cout << "winner is " << game.get_winner() << "\n";
		cout << "Continue?(y)" << "\n\n";
		cin >> choice;
		
	} while (choice == 'y' || choice == 'Y');


	system("PAUSE");
	return 0;
}