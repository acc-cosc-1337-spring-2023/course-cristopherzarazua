//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using std::string;
using std::vector;

#ifndef TIC_TAC_TOE3_H
#define TIC_TAC_TOE3_H

class TicTacToe3 : public TicTacToe
{
public:
    //default constructor
    TicTacToe3() : TicTacToe(3) {}

private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
};

#endif