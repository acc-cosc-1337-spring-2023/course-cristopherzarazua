//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>

using std::move;

void TicTacToeManager::get_winner_total(int &x, int &o, int &c)
{
    //Use references to get the winners
    x = x_win;
    o = o_win;
    c = ties;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe> &game)
{
    //update the winner count
    update_winner_count(game->get_winner());
    //push the game into the games vector
    string winner = game->get_winner(); // get the winner of the game

    games.push_back(move(game));
    if (winner == "X")
    {
        std::cout << "X wins!"
                  << "\n";
    }
    else if (winner == "O")
    {
        std::cout << "O wins!"
                  << "\n";
    }
    else
    {
        std::cout << "Tie!"
                  << "\n";
    }
}
void TicTacToeManager::update_winner_count(string winner)
{
}

std::ostream &operator<<(std::ostream &os, TicTacToeManager &manager)
{ //loop through the games vector and display each game
    for (auto &game : manager.games)
    {
        if (game)
        {
            os << *game << "\n";
        }
    }
    //display the winner totals
    os << "X wins: " << manager.x_win << "\n";
    os << "O wins: " << manager.o_win << "\n";
    os << "Ties: " << manager.ties << "\n";
    return os;
}