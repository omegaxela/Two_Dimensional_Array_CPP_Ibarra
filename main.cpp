//Student Name: Giovanni Ibarra
//Teacher: Dr. Tyson MCMillan
//Date: 4/9/2020
//A program to practice working with multi-demensional arrays.
#include <iostream>
using namespace std;
/*
Pick two cities of your choice.  Fill in the tmperature for the 7 days of this week o fboth cities. 
Fill in this text data table, which will be used in your program.
//Kyoto = 1, Houston = 2
Data Table
// City X, Day X: Temp
City 1, Day 1: 61
City 1, Day 2: 52
City 1, Day 3: 58
City 1, Day 4: 56
City 1, Day 5: 68
City 1, Day 6: 67
City 1, Day 7: 62
City 2, Day 1: 76
City 2, Day 2: 79
City 2, Day 3: 84
City 2, Day 4: 70
City 2, Day 5: 74
City 2, Day 6: 71
City 2, Day 7: 77
*/

int main(){
	const int CITY = 2;
	const int WEEK = 7;
	int temperature[CITY][WEEK];
	//Note input data above
	cout << "Enter all temperatures for a week of the first city and then the second city. \n";

	//Inserting values into temperature array
	//note for every dimension of the array you need a for loop
	for(int i = 0; i < CITY; ++i)
	{
		for(int j = 0; j < WEEK; ++j)
		{
			cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}

	}	
	
	cout << "\n\nDisplaying Values: \n";
	
	//Accessing the values from the temperature array
	for(int i = 0; i < CITY; ++i)
	{
		for(int j = 0; j < WEEK; ++j)
		{
			cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}
	return 0;
}

