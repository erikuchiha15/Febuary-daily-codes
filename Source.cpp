#include <iostream>


using namespace std;

int main() {

	int userScore = 0;
	int CompScore = 0;
	int computer;
	int input;
	while (input!=0) {
		//print scores here!
		cout << "Rock (1), Paper(2), Scissors(3), Shoot (0 for quit)" << endl;
		cin >> input;
		if (input == 1) {
			cout << "you chose rock!" << endl;
		}

		//generate a random number for computer
		computer = rand() % 3 + 1; //generates a number from 1-3

		if ((input == 2 && computer == 1) || (input == 3 && computer == 2) || (input == 1 && computer == 3)) {
			cout << "user won!" << endl;
			userScore++;

		}
		//add the second if statement here!
		if ((computer == 2 && input == 1) || (computer == 3 && input == 2) || (computer == 1 && input == 3)) {
			cout << "cpu won!" << endl;
			CompScore++;
		}
		else
			cout << "computer and user tied!" << endl;


	}

}