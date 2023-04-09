//h
#include <iostream>
#include "tic_tac_toe.h"
#include <string>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
class TicTacToeManager
{
public:
    void get_winner_total(int & x, int & o, int & c);
    void save_game(TicTacToe game);
    void update_winner_count(string winner);
    friend std::ostream& operator<<(std::ostream& os, TicTacToeManager manager);

private:
    int x_win;
    int o_win;
    int ties;
    vector<TicTacToe> games;
};

#endif