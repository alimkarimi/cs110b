#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
	int step;
	long int result;

	//pseudocode
	// step 1 = 1
	//step 2 = 10^1 + step 1
	//step 3 = 10^2 + step 2 
	//step 4 = 10^3 + step 3

	cout << "Which step do you want to display" << endl;

	cout << "Enter 1 - 7" << endl;

	cin >> step;
	while (step < 1 || step > 7)
	{
		cout << "Invalid step, enter again" << endl;
		cin >> step;
	}

	for (int i = 0; i < step; i++)
	{
		if (i == 0)
		{
			result = 1;
		}
		else
		{
			result = pow(10, i) + result;
		}
		
		cout << right << setw(15 + i) << result * result << endl;
	}

}
