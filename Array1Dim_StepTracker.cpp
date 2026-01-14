//Array (One Dimensional) Part 1: Step Tracker
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int steps[5];

	cout << "Enter the step counts:\n";
	for (int index = 0; index < size; index++)
	{
		int hour = index + 1;
		cout << "Hour " << hour << ": ";
		cin >> steps[index];
	}

	cout << "-===-\n";
	cout << "Steps: ";
	int totalSteps = 0;
	for (int index = 0; index < size; index++)
	{
		cout << steps[index] << " ";
		totalSteps += steps[index];
	}
	cout << endl;
	cout << "Total: " << totalSteps << endl;
	cout << "-===-\n";

	return 0;
}