#include <iostream>
using namespace std;

//Write a program to ask user to input a count. 
//Generate a fibonacci sequence in an array and print 
//it for the count entered by the user. Use a function to generate 
//the fibbonnacci numbers in the array.

//function prototype
void fibbonnacci(int[], int);

int main()
{
	int COUNT;

	//ask for input
	cout << "Please enter a count of how many numbers you would like to see in the" <<
	" fibbonnacci sequence" << endl;

	cin >> COUNT;
	while (COUNT <= 0)
	{
		cout << "You entered a count that is invalid. Please enter again" << endl;
		cin >> COUNT;
	}

	int sequence[COUNT];
	sequence[0] = 0;
	sequence[1] = 1;

	if (COUNT == 1)
	{
		cout << sequence[0] << endl;
	}

	else if (COUNT == 2)
	{
		cout << sequence[0] << ", " << sequence[1] << endl;
	}
	else
	{
		fibbonnacci(sequence, COUNT);
	}	
}

void fibbonnacci(int count[], int COUNT)
{
	//pseudocode of fibonacci
	// 0 --> 0 = 0
	// 1 --> 0 + 1 = 1
	// 2 --> 0 + 1 = 1
	// 3 --> 1 + 1 = 2
	// 4 --> 1 + 2 = 3
	// 5 --> 2 + 3 = 5

	//generate sequence in array
	
	for (int i = 0; i < COUNT; i++)
	{
		
		count[i + 2] = count[i] + count[i + 1];
		cout << count[i];
		if (i < COUNT -1)
		{
			cout << ", ";
		}
		else if (i == COUNT - 1)
		{
			cout << endl;
		}		
	}	
}
