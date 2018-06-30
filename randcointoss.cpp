#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int coinFlip();

int main(){

	int heads = 0;
	int tails = 0;
	// using time function to help get random results 
	// for everytime we run the program
	srand(time(NULL));

	for (int i = 1; i < 50; i++) {
		
		int result = coinFlip();
		if (result == 1) {
			heads++;
			cout << result << "\n";
		}
		else {
			tails++;
			cout << result << "\n";
		}
	}
	cout << "Number of times the coin landed on heads: " << heads << "\n";
	cout << "Number of times the coin landed on talis: " << tails << "\n";
	system("pause");
    return 0;
}

int coinFlip() {

	// allows the coin toss to be assigned
	// 1 for heads or 2 for tails
	int coinToss = rand() % 2 + 1;
	if (coinToss == 1) {
		cout << "The coin toss landed on heads: ";
	}
	else {
		cout << "The coin toss landed on tails: ";
	}
	return coinToss;
}
