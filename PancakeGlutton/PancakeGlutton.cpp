/*Requires: variables, data types, and numerical operators
basic input/output
logic (if statements, switch statements)
loops (for, while, do-while)
arrays

Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.

★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
Person 8: ate 4 pancakes
...
Person 5: ate 0 pancakes*/

#include <iostream>
using namespace std;

int main() {
	const int numOfPeople = 3;
	int pancakeEaten[numOfPeople];
	int pancakePersonMost = 0;
	int pancakePersonLeast = 0;
	int mostPancakes = 0;
	int leastPancakes;
	int hold;

	for (int i = 0; i < numOfPeople; i++) {
		cout << "How many pancakes did Person " << i + 1 << " eat? ";
		cin >> pancakeEaten[i];

		if (pancakeEaten[i] > mostPancakes) {
			mostPancakes = pancakeEaten[i];
			pancakePersonMost = i;
			leastPancakes = mostPancakes;
		}

		if (pancakeEaten[i] < leastPancakes) {
			leastPancakes = pancakeEaten[i];
			pancakePersonLeast = i;
		}

		if (pancakeEaten[i] < mostPancakes) {
			hold = pancakeEaten[i];
		}

		else {

		}



	}

	

	cout << "Person " << pancakePersonMost + 1 << " ate the most pancakes!\n\n";
	cout << "Person " << pancakePersonLeast + 1 << " ate the least pancakes!\n\n";



	system("pause");
	return 0;
}