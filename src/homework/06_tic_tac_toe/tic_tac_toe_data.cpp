//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <fstream>

using std::vector; using std::unique_ptr; using std::ofstream; using std::string; using std::cout;
void TicTacToeData::save_game(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream file;
    file.open("tictactoe.dat");
    if(file)
    {
        for (const auto& game : games)
        {
            const auto& pegs = game->get_pegs();
            for(const auto& peg : pegs)
            {
                file << peg;
            }
            file << game->get_winner() << "\n";
        }
    }
    file.close();
}

vector<unique_ptr<TicTacToe>> TicTacToeData::get_game()
{
    vector<unique_ptr<TicTacToe>>games;
    std::ifstream file;
    file.open("tictactoe.dat");
    std::string line;
    vector<std::string>pegs;

    if
    (file.is_open())
    {
        while (getline(file,line))
        {
            std::vector<std::string>pegs;
            for (size_t i = 0; i < line.size() - 1; i++)
            {
                pegs.push_back(std::string(1,line[i]));
            }
            std::string winner = std::string(1, line.back());
            std::unique_ptr<TicTacToe> board;
            if (pegs.size() == 9)
            {
                board = std::make_unique<TicTacToe3>(pegs, winner);
            }
            else if(pegs.size() == 16)
            {
                board = std::make_unique<TicTacToe4>(pegs, winner);
            }
            games.push_back(std::move(board));
        }
        return games;

    }
}