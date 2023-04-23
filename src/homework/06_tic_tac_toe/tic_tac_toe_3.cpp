#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <memory>
#include <vector>

using std::string; using std::cout; using std::vector;
/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe3::check_column_win()
{
    bool won = false;
    if (pegs[0] == pegs[3] && pegs[0] == pegs[6] && pegs[0] != " ") //first column
    {
        won = true;
    }
    else if (pegs[1] == pegs[4] && pegs[1] == pegs[7] && pegs[1] != " ") //mid column
    {
        won = true;
    }
    else if (pegs[2] == pegs[5] && pegs[2] == pegs[8] && pegs[2] != " ") //last column
    {
        won = true;
    }
    else {
        won = false;
    }
    return won;
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe3::check_row_win() 
{
    bool won = false;
    if (pegs[0] != " " && pegs[0] == pegs[1] && pegs[0] == pegs[2])
    {
        won = true;
    }
    else if (pegs[3] != " " && pegs[3] == pegs[4] && pegs[3] == pegs[5])
    {
        won = true;
    }
    else if (pegs[6] != " " && pegs[6] == pegs[7] && pegs[6] == pegs[8])
    {
        won = true;
    }   
    return won;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/
bool TicTacToe3::check_diagonal_win() 
{
    bool won = false;
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
    {
        won = true;
    }
    else if (pegs[6] != " " && pegs[6] == pegs[4] && pegs[6] == pegs[2])
    {
        won = true;
    }
    return won;
}