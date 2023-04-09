//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin; using std::string; 

void TicTacToeManager::get_winner_total(int& x, int& o, int& c)
{
    x = x_win;
    o = o_win;
    c = ties;
}

void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game); 
    string winner = game.get_winner(); 
    if (winner == "X") 
    {
        x_win++; 
                cout << "X wins!" << "\n";
    } else if (winner == "O")
    {
        o_win++; 
                cout << "O wins!" << "\n" ;
    } else 
    {
        ties++;
                cout << "C wins!" << "\n";
    }
}

void TicTacToeManager::update_winner_count(string winner)
{
    
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

std::ostream& operator<<(std::ostream& os, TicTacToeManager manager)
{    
    for (const auto& game : manager.games)
    {
        os<<game<< "\n";
    }
    os<< "X wins: " <<manager.x_win<< "\n";
    os<< "O wins: " <<manager.o_win<< "\n";
    os<< "Ties: " <<manager.ties<< "\n";
    return os;
}