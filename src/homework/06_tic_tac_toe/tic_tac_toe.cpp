//cpp
#include<iostream>
#include "tic_tac_toe.h"
#include<vector>
#include<string>

using std::string; using std::cout; using std:: cin;

bool TicTacToe::game_over()
{
    
    if (TicTacToe::check_row_win() == true || TicTacToe::check_column_win() == true || TicTacToe::check_diagonal_win() == true) //check for win
    {
        set_winner(); //set winner
        return true;
    }
    else if (check_board_full() == true)
    {
        TicTacToe::winner = "C"; //tie 
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_column_win()
{
    if (TicTacToe::pegs[0] == TicTacToe::pegs[3] && TicTacToe::pegs[3] == TicTacToe::pegs[6] && TicTacToe::pegs[0] != " ") //first column
    {
        return true;
    }
    else if (TicTacToe::pegs[1] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[7] && TicTacToe::pegs[1] != " ") //mid column
    {
        return true;
    }
    else if (TicTacToe::pegs[2] == TicTacToe::pegs[5] && TicTacToe::pegs[5] == TicTacToe::pegs[8] && TicTacToe::pegs[2] != " ") //last column
    {
        return true;
    }
    else {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if (TicTacToe::pegs[0] == TicTacToe::pegs[1] && TicTacToe::pegs[1] == TicTacToe::pegs[2] && TicTacToe::pegs[0] != " ") //first row
    {
        return true;
    }
    else if (TicTacToe::pegs[3] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[5] && TicTacToe::pegs[3] != " ") //mid row
    {
        return true;
    }
    else if (TicTacToe::pegs[6] == TicTacToe::pegs[7] && TicTacToe::pegs[7] == TicTacToe::pegs[8] && TicTacToe::pegs[6] != " ") //last row
    {
        return true;
    }
    else {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if (TicTacToe::pegs[0] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[8] && TicTacToe::pegs[0] != " ")  //first diagonal
    {
        return true;
    }
    else if (TicTacToe::pegs[2] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[6] && TicTacToe::pegs[2] != " ") //second diagonal
    {
        return true;
    }
    else {
        return false;
    }
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

/*void TicTacToe::display_board() const
{
    for (int i = 0; i < 9; i += 3) 
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2];

        if (i + 1 != 9) 
        {
            cout << "\n";
        }
    }
}*/

void TicTacToe::set_winner()
{
    if (TicTacToe::player == "X")
    {
        TicTacToe::winner = "O";
    }
    else if (TicTacToe::player == "O")
    {
        TicTacToe::winner = "X";
    }
    else {
        TicTacToe::winner = "C";
    }
}


string TicTacToe::get_winner() const
{
    return winner;
}

std::ostream &operator<<(std::ostream &out, const TicTacToe &game)
{
    for (int i = 0; i < 9; i += 3)
    {
        out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2]
            << "\n";
    }
    return out;
}

std::istream &operator>>(std::istream &in, TicTacToe &game)
{
    int position;
    cout << "Enter position 1-9: ";
    in >> position;
    game.mark_board(position);
    return in;
}