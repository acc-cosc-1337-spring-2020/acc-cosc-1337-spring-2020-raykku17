#include "tic_tac_toe.h"
#include <iostream>
using std::cin; using std::cout;
int main() 
{
	tictactoe game;
	char choice;
	string letter;
	int position;
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
			
		
			cout << "Enter position between 1 and 9: ";
			cin >> position;
			cout << position << (' ') << "is" << (" ") << letter << "\n";
			
			try
			{
				game.mark_board(position);
				
			}
			catch (Invalid e)
			{
				cout << e.get_error() << "\n";
			}
			game.display_board();
			game.game_over();
			win = game.game_over();
		
		} while (win == false );
		
		cout << "winner is " << game.get_winner() << "\n";
		cout << "Continue?(y)" << "\n\n";
		cin >> choice;
		
	} while (choice == 'y' || choice == 'Y');


	system("PAUSE");
	return 0;
}