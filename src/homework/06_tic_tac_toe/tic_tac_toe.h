//h
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using std::string;
using std::vector;
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
class TicTacToe
{
public:
    TicTacToe() : pegs(9, " ")  {}
    TicTacToe(int size) : pegs(size * size, " ") {}
    TicTacToe(std::vector<std::string> p, std::string win);
    const std::vector<std::string>& get_pegs() const;
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const {return player;}
    friend std::ostream &operator<<(std::ostream &out, const TicTacToe &game);
    friend std::istream &operator>>(std::istream &in, TicTacToe &game);
    string get_winner() const {return winner;} //making a public function to get for winner

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    void set_next_player();
    bool check_board_full();
    void clear_board();
    string player;
    void set_winner();
    string winner;
};
#endif