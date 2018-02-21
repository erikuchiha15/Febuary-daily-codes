#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {

	string title1[20] = { "Sir","Madame","Lady","Lord","King","Queen","Master","","","","","","","Champion","","","","","","" };
	string name[17] = { "","","","","","","","","","","","","","","","","" };
	

	srand(time(NULL));


	while (1 == 1) {
		int t1 = rand() % 20;
		int n = rand() % 17;

		cout << endl << endl << title1[t1] << " " << name[n] << " " << endl << endl;


	
		system("pause");
	}


}