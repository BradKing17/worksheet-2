// worksheet2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

int main()
{
	//Variables
	char comp_guess = '\0';
	char player_guess = '\0';
	int comp_win_tally = 0;
	int player_win_tally = 0;
	char end = '\0';

	//File handling
	std::ifstream inFile;
	inFile.open("RPS.txt");
	if (!inFile)
	{
		std::cout << "Unable to open file.";
		exit(1);
	}
	inFile >> comp_guess;

	std::cout << "Please enter your guess: ";
	std::cin >> player_guess;

	switch (player_guess)
	{
		case 'R':
		case 'r':
		{
			std::cout << "Its a tie!";
			break;
		}
		case 'P':
		case 'p':
		{
			std::cout << "You win";
			break;
		}

		case 'S':
		case 's':
		{
			std::cout << "You lose!";
			break;
		}

		default:
		{
			std::cout << "Invalid input";
			break;
		}
	}
	std::cin >> end;
	return 0;
}

