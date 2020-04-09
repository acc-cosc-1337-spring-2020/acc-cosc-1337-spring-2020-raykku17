//h
#include <string>
#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::string;
class tictactoe
{
public:
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }
	void display_board() const;
	string get_winner() const { return winner; }
	friend std::istream& operator>>(std::istream& in, tictactoe& d);
	friend std::ostream& operator<<(std::ostream& out, const tictactoe& d);

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	string player;
	std::vector<std::string> pegs{ 9, " " };
	string winner;
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
};
class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error() const { return message; }
private:
	std::string message;
};