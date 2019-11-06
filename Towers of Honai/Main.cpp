//Towers of Honai up to 5 disks wih 5 pegs
#include <time.h>
#include <iostream>
#include <string>

using namespace std;

//prototype for funtion call
void TowersOfHanoi(int, string, string, string, string, string);

int main()
{
	//Title of Program
	cout << "Tower of Hanoi Program using n discs and 5 pegs." << endl << endl;
	system("Pause");

	//Run program until commanded not to
	while (1) {
		int n; //n =  # of discs
		cout << "How many discs do you want to use? ";
		cin >> n; // getting n input from the user.
		cout << endl << endl;
		//calling funtions to operate the Hanoi puzzle
		//names of the pegs
		TowersOfHanoi(n, "Start", "Dest", "Aux1", "Aux2", "Aux3");
		
		//Run program again operations.
		char answer;
		cout << endl;
		cout << "Do you want to run program again? (y/n): ";
		cin >> answer;
		cout << endl << endl;
		if (answer == 'y') continue;
		else break; //breaks out of infinite while loop.
	}
	
	return 0;
}

//funtion to solve Hanoi puzzle
void TowersOfHanoi(int n, string StartPeg, string DestPeg, string Aux1Peg, string Aux2Peg, string Aux3Peg)
{
	if (n <= 0) {//security check.  
		cout << "Error" << endl << endl;
		return;
	}
	if (n == 1) {//base case to exit recursive call
		cout << "Move disk " << n << " from " << StartPeg << " peg to "
			<< DestPeg << "." << endl;
		return;
	}
	//calls the function
	TowersOfHanoi(n - 1, StartPeg, Aux1Peg, Aux2Peg, Aux3Peg, DestPeg);
	cout << "Move disk " << n << " from " << StartPeg << " peg to "
		<< DestPeg << "." << endl;
	//recursive function call
	TowersOfHanoi(n - 1, Aux1Peg, DestPeg, StartPeg, Aux2Peg, Aux3Peg);
	
}