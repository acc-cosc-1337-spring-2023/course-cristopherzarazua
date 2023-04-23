//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

bool TicTacToe::game_over()
{
    bool over = false;
    if (check_row_win() == true || check_column_win() == true || check_diagonal_win() == true) //check for win
    {
        set_winner(); //set winner
        over = true;
    }
    else if (check_board_full() == true)
    {
    winner = "C"; //tie
        over = true;
    }
    else
    {
        over = false;
    }
    return over;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (const auto &peg : pegs)
    {
        if (peg == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (auto &peg : pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
    winner = "O";
    }
    else if (player == "O")
    {
        winner = "X";
    }
    else
    {
    winner = "C";
    }
}

std::ostream &operator<<(std::ostream &out, const TicTacToe &game)
{
    int size = game.pegs.size();
    for (int i = 0; i < size; i++)
    {
        out << game.pegs[i];
        if (size == 9)
        {
            if (i == 2 || i == 5 || i == 8)
            {
                out << "\n";
            }
            else if (i < size - 1)
            {
                out << "|";
            }
        } 
        else if (size == 16)
        {
            if (i == 3 || i == 7 || i == 11 || i == 15)
            {
                out << "\n";
            }
            else if (i < size - 1)
            {
                out << "|";
            }
        }
    }
    return out;
}

std::istream &operator>>(std::istream &in, TicTacToe &game)
{
    int position;
    cout << "Enter position from 1 to " << game.pegs.size() << ": ";
    in >> position;
    if (position < 1 || position > game.pegs.size())
    {
        cout << "Invalid position.\n";
    }
    game.mark_board(position);
    return in;
}

TicTacToe::TicTacToe(std::vector<std::string> p, string win) : pegs{p}, winner{win} {}
const std::vector<std::string>& TicTacToe::get_pegs() const 
{
    return pegs;
}