// 24_6_34.cpp : Guess-the-Number Game
// 25_6_35.cpp : Guess-the-Number Game Modification

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int myNumber{ 1 + rand() % 1000 }; // random number (1 to 1000)
	int numOfGuesses{ 0 };

	char playAgain{'y'}; // (yes or no)
	cout << "I have a number between 1 and 1000.\n";
	cout << "Can you guess my number?\n";
	cout << "Please type your first guess.\n";
	int playerGuess{ 0 };
	cin >> playerGuess;

	while (playerGuess != myNumber || playAgain == 'y')
	{
		numOfGuesses++;
		if (playerGuess < myNumber) {
			cout << "Too low. Try again.\n";
			cin >> playerGuess;
		}
		else if (playerGuess > myNumber) {
			cout << "Too high. Try again.\n";
			cin >> playerGuess;
		}
		else {
			if (numOfGuesses <= 10)
			{
				cout << "Either you know the secret or you got lucky!\n";
			}
			if (numOfGuesses == 10)
			{
			cout << "Ahah! You know the secret!\n";
			}
			else if (numOfGuesses > 10) {
				cout << "You should be able to do better!\n";
			}

			cout << "Would you like to play again (y or n)? ";
			cin >> playAgain;
			if (playAgain == 'y') {
				numOfGuesses = 0;
				myNumber = static_cast<int>(1 + rand() % 1000);
				system("CLS"); // clear screen
				cout << "I have a number between 1 and 1000.\n";
				cout << "Can you guess my number?\n";
				cout << "Please type your first guess.\n";
				cin >> playerGuess;
			}
		}
	}
}
