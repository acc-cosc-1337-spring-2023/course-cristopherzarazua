//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdlib.h>
#include <cstring>

using std::string; using std::vector;
class TicTacToeManager : public TicTacToeData
{
    public:
        TicTacToeManager() = default;
        TicTacToeManager (TicTacToeData &data);
        void save_game(std::unique_ptr<TicTacToe>&);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int& t);
        void start_game(std::unique_ptr<TicTacToe>& board, std::string player);
    private:
        TicTacToeData data;
        std::vector<std::unique_ptr<TicTacToe>> games;
        int o_wins = 0;
        int x_wins = 0;
        int ties = 0;
        void update_winner_count(std::string winner);
};
#endif