#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;



int main()
{
	//the beginning of the program
	srand(time(NULL));

	int randNumber = rand() % 4;

	int round = 1;

	int HP[4] = { 100, 100, 100, 100 };

	//the game loop:
	bool done = false;
	while (done == false)
	{
		cout << "---------------------" << endl;
		cout << "Round: " << round << endl;

		for (int i = 0; i < 4; i++)
		{

			cout << HP[i] << endl;
		}

		cout << "Who do you want to attack?" << endl;

		int attackWho;

		cin >> attackWho;

		cout << "You attack player " << attackWho << endl;

		HP[attackWho] = HP[attackWho] - 5;

		//each NPC (Non-Player Character) gets to move:
		for (int i = 1; i <= 3; i++)
		{
			attackWho = rand() % 4; // Between 0 and 3.
			HP[attackWho] = HP[attackWho] - 5;

			cout << "Player " << i << " attacks " << attackWho << " hit for 5 damage." << endl;
									
		}

		//Check win/lose
		if (HP[attackWho] <= 0)
		{
			cout << "YOU LOSE!" << endl;
			done = true;
		}

		else
		{
			cout << "YOU WIN!" << endl;
			done = true;
		}

		round++;
	}



	return 0;
}
