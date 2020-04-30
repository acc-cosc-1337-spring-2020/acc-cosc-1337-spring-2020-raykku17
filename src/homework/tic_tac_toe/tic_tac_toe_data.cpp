#include "tic_tac_toe_data.h"
#include <iomanip>
#include<memory>

using std::unique_ptr; using std::make_unique;
//cpp

void tictactoedata::save_games(const std::vector<string>& games)
{
	std::ofstream myfile;
	myfile.open("tictactoe.dat");

	for (auto i : pegs)
	{ 
		for (auto c:games)
		{
			myfile << " ";
		}
		myfile << get_winner();
		myfile << "\n";
	}
	myfile.close();
}

std::vector<std::unique_ptr<tictactoe>> tictactoedata::get_games()
{
	std::vector<std::unique_ptr<tictactoe>> boards;
	std::ifstream read_file("tictactoe.date");

	string line;
	std::vector<string> pegs;

	while (read_file.is_open)
	{
		
		while (std::getline(read_file, line))
		{
			for (auto ch = 0; ch < line.size - 1; ch++)
			{
				string stringch(1, ch);
				pegs.push_back(stringch);
			}
			string winner = pegs[-1];
			std::unique_ptr<tictactoe>board;

			if (pegs.size == 9)
			{
				board = make_unique<tictactoe3>(pegs, winner);
			}
			else if (pegs.size == 16)
			{
				board = make_unique<tictactoe4>(pegs, winner);
			}
			boards.push_back(board);
		}
		read_file.close();
	}
	return boards;

}
