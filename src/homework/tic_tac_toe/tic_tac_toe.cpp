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
		clear_board();
	}
	else 
	{
		throw Invalid("Player must be X or O");
	}
}

void tictactoe::mark_board(int position)
{
	
	if (position<1||position>pegs.size())
	{
		throw Invalid("Number must be between 1 and board size");
	}
	if(player.empty())
	{
		throw Invalid("Must start game first.");
	}
	pegs[position - 1] = player;
	set_next_player();

}


void tictactoe::set_next_player()
{

	if (player == "X")
	{
		player = "O";
		
	}
	else
	{
		player = "X";
	}
	
	
}

bool tictactoe::check_board_full()
{
	for(std::size_t i = 0;i < pegs.size();++i)
		if (pegs[i] == " ")
		{
			return false;
		}
	return true;
}

void tictactoe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}
bool tictactoe::game_over()
{
	if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
	{
		set_winner();
		return true;
	}
	else if(check_board_full()==true)
	{
		winner = "C";
		return true;

	}
	return check_board_full();
	
}

bool tictactoe::check_column_win()
{
		return false;
}

bool tictactoe::check_row_win()
{
		return false;
}

bool tictactoe::check_diagonal_win()
{
	return false;
}

void tictactoe::set_winner()
{
	if (player == "X")
	{
		winner = "O";

	}
	else
	{
		winner = "X";
	}
}

std::istream & operator>>(std::istream & in, tictactoe & d)
{
	int position;
	cout << "Enter Position between 1- "<<d.pegs.size()<<"\n";
	in >> position;
	d.mark_board(position);

	return in;
}

std::ostream & operator<<(std::ostream & out, const tictactoe & d)
{
	if(d.pegs.size()==9)
	{ 
		for (int i = 0; i < 9; i += 3)
		{
			out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "\n";

		}
	}
	else if (d.pegs.size() == 16)
	{
		for (int i = 0; i < 16; i += 4)
		{
			out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2]<<"|" <<d.pegs[i+3]<< "\n";

		}
	}
	return out;
}
