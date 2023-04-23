//h
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include"tic_tac_toe.h"

using std::string;
using std::vector;

#ifndef TIC_TAC_TOE4_H
#define TIC_TAC_TOE4_H

class TicTacToe4 : public TicTacToe
{
public:
    //default constructor
    TicTacToe4() : TicTacToe(4) {}

private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
};

#endif