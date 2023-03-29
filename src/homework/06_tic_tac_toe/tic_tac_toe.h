//h
#include<iostream>
#include<string>
#include<vector>

#ifndef TicTacToe_H
#define TicTacToe_H

using std:: vector; using std::string;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    void display_board() const;
    string get_player() const;

private: 
    string player;
    vector<string> pegs{9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
};


#endif