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
    virtual void start_game(string first_palyer);
    void mark_board(int position);
    void display_board() const;
    string get_player() const;

private: 
    void set_next_player();
    bool check_board_full();
    void clear_board();
    
    string player;
    vector<string> pegs{9, " "};
};


#endif