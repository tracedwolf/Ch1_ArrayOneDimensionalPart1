//Array (One Dimensional) Part 1: Robot Distance Sensors
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int distance[size];

	for (int index = 0; index < size; index++)
	{
		cout << "Distance " << index << ": ";
		cin >> distance[index];
	}

	int firstDistance = distance[0];
	int lastDistance = distance[size - 1];

	cout << endl;
	cout << "First Distance: " << firstDistance << "cm\n";
	cout << "Last Distance: " << lastDistance << "cm\n";

	return 0;
}