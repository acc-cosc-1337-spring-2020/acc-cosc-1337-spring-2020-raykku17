//h
#include <string>
using std::string;
class tictactoe
{
public:
	tictactoe(string p) : player{ p } { set_next_player(); }
	void start_game(string first_player);
	void mark_board(int position);
	string get_player() const { return player; }



private:
	void set_next_player();
	string player;


};
class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {}
	std::string get_error() const { return message; }
private:
	std::string message;
};