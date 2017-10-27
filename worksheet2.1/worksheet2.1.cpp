// worksheet2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>


int main()
{
	int target_number = 0;
	int player_guess = 0;
	char play_again = 'Y';

	
	while (play_again == 'Y' || play_again == 'y')
	{
		system("CLS");
		std::srand(std::time(0));

		target_number = std::rand() % 10 + 1;

		std::cout << "GUESS THE NUMBER GAME\n\n" << "Please Enter a number between 1 and 10: ";
		std::cin >> player_guess;

		if (player_guess <= 10 && player_guess >= 1)
		{
				if (player_guess == target_number)
				{
					std::cout << "\n\nCongrats! You win!";
					
				}
				else if (player_guess < target_number)
				{
					std::cout << "\n\nYour guess is less than the answer!";
				}
				else if (player_guess > target_number)
				{
					std::cout << "\n\nYour guess is more than the answer!";
				}

				std::cout << "\n\nThe number was: " << target_number;
			
		}
		else
		{
			std::cout << "\n\nInvalid input";
		}

		std::cout << "\n\nDo you want to play again (y/n)?";
		std::cin >> play_again;
	}

    return 0;
}

