#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include <iostream>
#include <memory>

using std::cin;
using std::cout;
using std::make_unique;
using std::unique_ptr;

int main()
{
    TicTacToeManager manager; // instance of TicTacToeManager to manage the games
    char choice;              // variable to store user choice to play again or not
    do
    {
        unique_ptr<TicTacToe> game; // variable to store the game
        string player;
        int game_version;
        cout << "Enter board size (3 or 4): ";
        cin >> game_version;

        if (game_version == 3)
        {
            game = make_unique<TicTacToe3>();
        }
        else if (game_version == 4)
        {
            game = make_unique<TicTacToe4>();
        }

        cout << "Enter X or O: ";
        cin >> player;
        if (player == "q" || player == "Q")
        {
            break;
        }
        game->start_game(player);
        cout << *game;
        while (!game->game_over())
        {
            cin >> *game;
            cout << *game;
        }
        manager.save_game(game);
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    cout << manager;
    cout << "Thanks for playing my TicTacToe!"
         << "\n";
    return 0;
}