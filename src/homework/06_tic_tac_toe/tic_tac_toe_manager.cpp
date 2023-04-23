//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <stdlib.h>
#include <cstring>

TicTacToeManager::TicTacToeManager(TicTacToeData &data)
{
    games = data.get_game();
    for (auto& game : games)
    {
        update_winner_count(game->get_winner());
    }
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>&game)
{
    data.save_game(games);
}


void TicTacToeManager::get_winner_total(int &o, int &w, int &c)
{
    o = o_wins;
    w = x_wins;
    c = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
   for (const auto& game : manager.games)
   {
        out << *game << "\n";
   } 
   