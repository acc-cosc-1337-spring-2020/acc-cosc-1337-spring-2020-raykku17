//cpp
#include "tic_tac_toe.h"
#include <stdlib.h>

void tictactoe::start_game(string first_player)

{
	player == first_player;
	if (player != "O" || player != "X")
	{
		throw Invalid("Player must be X or O");
	}
}

void tictactoe::mark_board(int position)
{
	void start_game();
	if (position = rand() % 9 + 1)
	{
		set_next_player();
	}
	else if (position != rand() % 9 + 1)
	{
		throw Invalid("Number must be between 1 and 9.");
	}
	else
	{
		throw Invalid("Must start game first.");
	}
	
}

void tictactoe::set_next_player()
{
	
	if (player =="X")
	{
		player = 'O';
	}
	else
	{
		player = 'X';
	}
}
