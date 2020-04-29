#include "tic_tac_toe_data.h"
#include <iomanip>
//cpp

void tictactoedata::save_pegs(const std::vector<string>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	for (auto pegs : pgs)
	{ 
		for (auto c:pgs)
		{
			file_out << " ";
		}
		file_out << get_winner;
		file_out << "\n";
	}
	file_out.close();
}

std::vector<std::unique_ptr<tictactoe>> tictactoedata::get_games()
{
	std::vector<std::unique_ptr<tictactoe>> tictactoe3;
	std::vector<std::unique_ptr<tictactoe>> tictactoe4;
	std::ifstream open_file("tictactoe.dat");
	while (open_file.is_open)
	{
		std::vector<string>ch;
		string line;
		while (std::getline(file_out, line))
		{
			for (ch.begin(), ch.end())
			{
				ch.push_back(line);
			}
		}
	}

}
