//Array (One Dimensional) Part 1: Road Trip Fuel Costs
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int cost[size];

	cout << "Input gas costs:\n";
	for (int index = 0; index < size; index++)
	{
		int costNum = index + 1; //Display Number
		cout << "Cost #" << costNum << ": $";
		cin >> cost[index];
	}
	cout << "-===-\n";
	cout << "Costs ($): ";
	for (int index = 0; index < size; index++)
	{
		cout << cost[index] << " ";
	}

	int maxCost = cost[0];
	for (int index = 1; index < size; index++)
	{
		if (cost[index] > maxCost)
		{
			maxCost = cost[index];
		}
	}
	cout << "\nHighest Cost: $" << maxCost << endl;
}