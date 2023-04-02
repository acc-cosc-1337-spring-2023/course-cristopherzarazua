#include<iostream>
#include<string>
#include"tic_tac_toe.h"

using std::string; using std::cout; using std::cin;

int main() 
{
	TicTacToe game;
	string player;

	cout<<"Select X or O: ";
    cin>>player;
	game.start_game(player);
	bool continue_game = true;
	while (continue_game)
	{
		int position;
		cout << "Enter a position from 1 to 9: ";
		cin >> position;
	
		game.mark_board(position);
		if (game.game_over())
		{

			cout <<"Game over!\n";
			cout<<"The winner is: " <<game.get_winner()<< "\n";
			
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