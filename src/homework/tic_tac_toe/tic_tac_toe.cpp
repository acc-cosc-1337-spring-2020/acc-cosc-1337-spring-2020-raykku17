//cpp
#include "tic_tac_toe.h"
#include <stdlib.h>
#include <iostream>
using std::cin; using std::cout;

void tictactoe::start_game(string first_player)

{

	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else 
	{
		throw Invalid("Player must be X or O");
	}
}

void tictactoe::mark_board(int position)
{
	
	if (position<1||position>9)
	{
		throw Invalid("Number must be between 1 and 9.");
	}
	if(player.empty())
	{
		throw Invalid("Must start game first.");
	}
	set_next_player();
}

void tictactoe::set_next_player()
{

	if (player == "X")
	{
		get_player() = 'O';
		
	}
	else
	{
		get_player() = 'X';
	}
	
	
}
