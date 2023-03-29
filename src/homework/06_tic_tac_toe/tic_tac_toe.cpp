//cpp
#include<iostream>
#include "tic_tac_toe.h"
#include<vector>
#include<string>

using std::string; using std::cout; using std:: cin;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    auto mark = position - 1;
    pegs[mark] = player;
    display_board();
    set_next_player();
}

void TicTacToe::set_next_player()
{
    if(player == "X" || player == "x")
    {
        player = "O";
    }
    else if(player == "O" || player == "o")
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    bool condition;
    for(auto i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            condition = false;
            break;
        } 
        else
        {
            condition = true;
        }
    }

    return condition;
}

void TicTacToe::clear_board()
{
    for(auto i = 0; i < pegs.size(); i++)
        pegs[i] = " ";
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{
    for (int i = 0; i < 9; i += 3) 
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2];

        if (i + 1 != 9) 
        {
            cout << "\n";
        }
    }
}
