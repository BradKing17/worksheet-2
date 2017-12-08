// worksheet2.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>



int main()
{
	//Variables
	int win_tally = 0;
	int comp_guess_num = 0;
	char comp_guess = '\0';
	char end = '\0';
	char play_again = 'Y';

	//Generate computer guess
	srand(time(NULL));



	while (play_again == 'Y' || play_again == 'y')
	{
		comp_guess_num = rand() % 3 + 1;

		if (comp_guess_num == 1)
		{
			comp_guess = 'R';
		}
		else if (comp_guess_num == 2)
		{
			comp_guess = 'P';
		}
		else if (comp_guess_num == 3)
		{
			comp_guess = 'S';
		}

		//Play Function
		win_tally = playTurn(comp_guess);

		std::cout << "\n\nPlay Again?";
		std::cin >> play_again;
	}

	return 0;
}

int playTurn(char computer_value)
{
	int win_tally = 0;
	char player_guess = '\0';
	
	std::cout << "\n\nPlease enter your guess: ";
	std::cin >> player_guess;

	switch (player_guess)
	{
	case 'R':
	case 'r':
	{
		if(computer_value == 'R')
		{
			std::cout << "Its a tie!";
			return 0;
		}
		if (computer_value == 'P')
		{
			std::cout << "You win";
			return 1;
		}
		if (computer_value == 'S')
		{
			std::cout << "You Lose";
			return -1;
		}
		
		break;
	}
	case 'P':
	case 'p':
	{
		if (computer_value == 'P')
		{
			std::cout << "Its a tie!";
			return 0;
		}
		if (computer_value == 'R')
		{
			std::cout << "You win";
			return 1;
		}
		if (computer_value == 'S')
		{
			std::cout << "You Lose";
			return -1;
		}

		break;
	}

	case 'S':
	case 's':
	{
		if (computer_value == 'S')
		{
			std::cout << "Its a tie!";
			return 0;
		}
		if (computer_value == 'S')
		{
			std::cout << "You win";
			return 1;
		}
		if (computer_value == 'R')
		{
			std::cout << "You Lose";
			return -1;
		}

		break;
	}
	default:
	{
		std::cout << "Invalid input";
		break;
	}
	}
}

