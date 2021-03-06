#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can�t call mark board before start game")

{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	REQUIRE_THROWS_AS(game->mark_board(1), Invalid);
}
TEST_CASE("Test start game accepts only X or O")

{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	REQUIRE_THROWS_AS(game->start_game("d"), Invalid);
}
TEST_CASE("Test start game with player X")

{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
}
TEST_CASE("Test start set game player O")

{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
}
TEST_CASE("Test start game with flow X")

{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	game->start_game("X");
	REQUIRE(game->get_player() == "X");
	game->mark_board(4);
	REQUIRE(game->get_player() == "O");
}
TEST_CASE("Test start game with flow O")

{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	game->start_game("O");
	REQUIRE(game->get_player() == "O");
	game->mark_board(4);
	REQUIRE(game->get_player() == "X");
}
TEST_CASE("Test game ends when board is full")
{
	unique_ptr<tictactoe> game = make_unique<tictactoe>();
	game->start_game("X");
	for (int i = 1;i <6; ++i)
	{
		game->mark_board(i);
		REQUIRE(game->game_over() == false);
	}
	game->mark_board(9);
	game->mark_board(6);
	game->mark_board(7);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
}
TEST_CASE("Test win by first column", "[X wins first column]")
{ 
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by second column", "[X wins second column]")
{ 
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by third column", "[X wins third column]")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by first row", "[X wins first row")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by second row", "[X wins second row]")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by third row", "[X wins third row]")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by first diagonal", "[X wins first diagonal]")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by second diagonal", "[X wins second diagonal]")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test no winners", "[X starts with no winners]")
{
	unique_ptr<tictactoe3> board = make_unique<tictactoe3>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O  
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O
	REQUIRE(board->game_over() == false); 
	board->mark_board(8);//X
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
}
TEST_CASE("Test win by first column 4", "[X wins first column]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by second column 4", "[X wins second column]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by third column 4", "[X wins third column]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by fourth column 4", "[X wins third column]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by first row 4", "[X wins first row")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by second row 4", "[X wins second row]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by third row 4", "[X wins third row]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by fourth  row 4", "[X wins third row]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by first diagonal 4", "[X wins first diagonal]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test win by second diagonal 4", "[X wins second diagonal]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X
	//X wins
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
TEST_CASE("Test no winners 4", "[X starts with no winners]")
{
	unique_ptr<tictactoe4> board = make_unique<tictactoe4>();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X        
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//O 
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//O  
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//O 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
}