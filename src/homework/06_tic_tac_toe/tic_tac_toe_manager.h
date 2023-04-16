//h
#include <iostream>
#include "tic_tac_toe.h"
#include <string>
#include <vector>
#include <memory>

using std::string;
using std::unique_ptr;
using std::vector;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
    void get_winner_total(int &x, int &o, int &c);
    void save_game(unique_ptr<TicTacToe> &game);
    void update_winner_count(string winner);
    friend std::ostream &operator<<(std::ostream &os, TicTacToeManager &manager);

private:
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    vector<unique_ptr<TicTacToe>> games;
};

#endif