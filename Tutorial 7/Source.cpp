//--------include libraries
#include <ctime>
#include <iostream>
#include <string>	
#include "Player.h"
#include "Game.h"
using namespace std;


//---------------------------------------------------------------------------
//with two dices
int main()
{
	Player player;
	Game twoDiceGame(&player);
	cout << "\n________________________";
	cout << "\nGame starting...";
	twoDiceGame.displayData();
	cout << "\n________________________";
	twoDiceGame.run();
	cout << "\n________________________";
	cout << "\nGame ended...";
	twoDiceGame.displayData();
	cout << "\n________________________\n";

	// hello

	system("pause");
	return 0;
}

