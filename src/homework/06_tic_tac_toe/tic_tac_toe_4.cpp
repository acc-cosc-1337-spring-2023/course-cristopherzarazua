#include "tic_tac_toe_4.h"\
#include "tic_tac_toe.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    bool won = false;
    if (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8] && pegs[0] == pegs[12])
    {
        won = true;
    }
    else if (pegs[1] != " " && pegs[1] == pegs[5] && pegs[1] == pegs[9] && pegs[1] == pegs[13])
    {
        won = true;
    }
    else if (pegs[2] != " " && pegs[2] == pegs[6] && pegs[2] == pegs[10] && pegs[2] == pegs[14])
    {
        won = true;
    }
    else if (pegs[3] != " " && pegs[3] == pegs[7] && pegs[3] == pegs[11] && pegs[3] == pegs[15])
    {
        won = true;
    }
    return won;
}
/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
    bool won = false;
    if (pegs[0] != " " && pegs[0] == pegs[1] && pegs[0] == pegs[2] && pegs[0] == pegs[3])
    {
        won = true;
    }
    else if (pegs[4] != " " && pegs[4] == pegs[5] && pegs[4] == pegs[6] && pegs[4] == pegs[7])
    {
        won = true;
    }
    else if (pegs[8] != " " && pegs[8] == pegs[9] && pegs[8] == pegs[10] && pegs[8] == pegs[11])
    {
        won = true;
    }
    else if (pegs[12] != " " && pegs[12] == pegs[13] && pegs[12] == pegs[14] && pegs[12] == pegs[15])
    {
        won = true;
    }
    return won;
}

/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
{
    bool won = false;
    if (pegs[0] != " " && pegs[0] == pegs[5] && pegs[0] == pegs[10] && pegs[0] == pegs[15])
    {
        won = true;
    }
    else if (pegs[3] != " " && pegs[3] == pegs[6] && pegs[3] == pegs[9] && pegs[3] == pegs[12])
    {
        won = true;
    }
    return won;
}