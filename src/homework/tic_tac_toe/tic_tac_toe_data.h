//h
#include "tic_tac_toe.h"
#include <fstream>
#include <string>
#include <vector>

#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

class tictactoedata : public tictactoe 
{
public:
	void save_pegs(const std::vector<string>& pgs);
	std::vector<std::unique_ptr<tictactoe>> get_games();

private:
	const std::string file_name{ "tictactoe.dat" };
};


#endif //!TIC_TAC_TOE_DATA_H