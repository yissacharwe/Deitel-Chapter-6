// 23_6_33 : Coin Tossing

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip(); // flips coin and returns result

int main()
{
	// randomize random number genertor using current time
	srand(static_cast<unsigned int>(time(0)));

	int tails{ 0 }; // counter for tails
	int heads{ 0 }; // counter for heads

	for (int i{ 0 }; i < 100; i++)
	{
		if (flip() == 0) {
			tails++;
		}
		else
			heads++;
	}
	cout << "Number of Tails: " << tails << endl;
	cout << "Number of Heads: " << heads << endl;
}

//  return 0 for tails and 1 for heads
//  print result
int flip()
{
	int face{ rand() % 2 };
	if (face == 0)
		cout << "Tails\n";
	else
		cout << "Heads\n";
	return face;
}