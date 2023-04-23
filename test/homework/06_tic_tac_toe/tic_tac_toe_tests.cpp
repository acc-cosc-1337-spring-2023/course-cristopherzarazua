#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

//test cases for 4x4 tic tac toe game
/*
class function check_diagonal_win
Win column
1,2,3,4,
5,6,7,8,
9,10,11,12
13,14,15,16
*/


TEST_CASE("Test win by a column 4x4")
{
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(3);
	REQUIRE(game.game_over() == false);

	game.mark_board(14);
	REQUIRE(game.game_over() == true);
}


TEST_CASE("Test win by a row 4x4")
{
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);

	game.mark_board(13);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(14);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(15);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(16);
	REQUIRE(game.game_over() == true);
}

/*
class function check_diagonal_win
Win diagonally
1,2,3,4,
5,6,7,8,
9,10,11,12
13,14,15,16
*/
TEST_CASE("Test win diagonally from top left 4x4")
{
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(2);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(11);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(16);
	REQUIRE(game.game_over() == true);

}

/*
class function check_diagonal_win
Win diagonally
1,2,3,4,
5,6,7,8,
9,10,11,12
13,14,15,16
*/

TEST_CASE("Test win diagonally from top right 4x4")
{
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE(game.game_over() == false);

	game.mark_board(4);
	REQUIRE(game.game_over() == false);

	game.mark_board(1);
	REQUIRE(game.game_over() == false);

	game.mark_board(7);
	REQUIRE(game.game_over() == false);

	game.mark_board(5);
	REQUIRE(game.game_over() == false);

	game.mark_board(10);
	REQUIRE(game.game_over() == false);

	game.mark_board(6);
	REQUIRE(game.game_over() == false);

	game.mark_board(13);
	REQUIRE(game.game_over() == true);
}
