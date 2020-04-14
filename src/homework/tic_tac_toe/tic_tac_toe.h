//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::string;

class tictactoe
{
public:
	tictactoe() = default;
	explicit tictactoe(int s) : pegs(s*s) { " "; }
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	
	string get_winner() const { return winner; }
	friend std::istream& operator>>(std::istream& in, tictactoe& d);
	friend std::ostream& operator<<(std::ostream& out, const tictactoe& d);
protected:
	std::vector<std::string> pegs{ 9, " " };
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
private:
	void set_next_player();
	bool check_board_full();

	void clear_board();
	string player;
	
	string winner;
	
	void set_winner();

	std::vector<std::reference_wrapper<tictactoe>>games;
};
class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error() const { return message; }
private:
	std::string message;
};

#endif //!TIC_TAC_TOE_H