#include<iostream>
#include"tic_tac_toe.h"

using std::string; using std::cout; using std::cin;

int main() 
{
	bool game_over = false;
	char continue_playing = 'Y';
	string user;
	while ((continue_playing == 'y' || continue_playing == 'Y') || game_over == false)
	{
	    cout<<"Enter X or O to start: ";
	    cin>>user;
	    TicTacToe* game = new TicTacToe();
	    game->start_game(user);
		cout<<"Continue playing? y or n: ";
		cin>> continue_playing;
	
	}
	return 0;
}