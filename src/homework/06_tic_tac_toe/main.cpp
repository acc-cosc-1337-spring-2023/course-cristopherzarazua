#include<iostream>
#include<string>
#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

using std::string; using std::cout; using std::cin;

int main() 
{
	TicTacToe game;
	TicTacToeManager manager;
	string player;

	cout<<"Select X or O: ";
    cin>>player;
	game.start_game(player);
	bool continue_game = true;
	while (continue_game)
	{
		//int position;
		cout << game;
		cin >> game;
	
		//game.mark_board(position);
		if (game.game_over())
		{

			cout <<"Game over!\n";
			cout<<"The winner is: " <<game.get_winner()<< "\n";
			manager.save_game(game);
			int x, o, c;
			manager.get_winner_total(x, o, c);
			cout << "\nX wins: " << x << "\n";
			cout << "O wins: " << o << "\n";
			cout << "Ties: " << c << "\n\n";
			
			string continue_playing;
			cout << "Continue playing? Enter Y or N: ";
			cin >> continue_playing;
			if (continue_playing == "N" || continue_playing == "n")
			{
				continue_game = false;
			}
			string first_player;
			game.start_game(player);
		}
	}
}