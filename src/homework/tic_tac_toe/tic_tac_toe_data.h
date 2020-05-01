//h
#include "tic_tac_toe.h"

#include <fstream>
#include <string>
#include <vector>
#include<memory>

using std::unique_ptr; using std::make_unique;


#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class tictactoedata : tictactoe
{
public:
	void save_games(const std::vector<std::unique_ptr<tictactoe>>& games);
	std::vector<std::unique_ptr<tictactoedata>> get_games();

private:
	const std::string file_name{ "tictactoe.dat" };
};


#endif //!TIC_TAC_TOE_DATA_H