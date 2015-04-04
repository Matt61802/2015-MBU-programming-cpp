#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses 
	int guess=0;
	int counter=0;

	
	for(;;)
	{
		// increment guess counter
		counter=counter+1;


		// read input from user
		cin >> guess;
		
		// compare input from user to random number
		// print out winner, too high or too low message
		if(guess>random_number)
		{
			cout << "too high" << endl;
		}
else if (guess<random_number)
{
	cout << "too low" << endl;
}
else {
cout << "correct" << endl;
break;}
}
	// print message with number of guesses
	cout << counter << endl; 
	

	return 0;
}
