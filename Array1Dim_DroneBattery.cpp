//Array (One Dimensional) Part 1: Drone Battery
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int battery[size];
	int lowBattery = 0;

	cout << "Battery Inputs:\n";
	for (int index = 0; index < 5; index++)
	{
		int batteryNum = index + 1;
		cout << "Battery " << batteryNum << ": ";
		cin >> battery[index];

		if (battery[index] < 20)
		{
			lowBattery++;
		}
	}
	cout << "-===-\n";
	cout << "Batteries: ";
	for (int index = 0; index < size; index++)
	{
		cout << battery[index] << " ";
	}
	cout << "\nLow readings (<20%): " << lowBattery << endl;

	return 0;
}