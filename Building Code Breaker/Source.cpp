// Word Jumble
// The classic word jumble game where the player can ask for
//a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	// This is the flag / switch play again or not:
	bool playAgain = false;

	//this loop will let me run the game 3 times, wait till end to add
	//for (int x = 0; x < 3; x++) {

	{
		enum fields { WORD, HINT, NUM_FIELDS };
		//going to need ten of these
		const int NUM_WORDS = 5;
		const string WORDS[NUM_WORDS][NUM_FIELDS] =
		{
			{"wall", "Do you feel you're banging your head against something?"},
			{"glasses", "These might help you see the answer."},
			{"labored", "Going slowly, is it?"},
			{"persistent", "Keep at it."},
			{"jumble", "come on man, it's just the name of the game."}
		}

		srand(static_cast<unsigned int>(time(0)));
		int choice = (rand() % NUM_WORDS);
		string theWord = WORDS[choice][WORD]; //word to guess
		string theHint = WORDS[choice][HINT]; //hint for the word

		string jumble = theWord; //jumbled version of the word
		int length = jumble.size();
		for (int i = 0; i < length; ++i)
		{
			int index1 = (rand() % length);
			int index2 = (rand() % length);
			char temp = jumble[index1];
			jumble[index1] = jumble[index2];
			jumble[index2] = temp;
		}

		cout << "\t"


	}
	char userChoice;
	
	cout << "Would you like to play again? (Y/N)";
	cin >> userChoice;

	if (userChoice == 'y' || userChoice == 'Y')
	{
		playAgain = true
	}


	
cout << "\nThanks for playing.\n";

system("pause");

return 0;
}
