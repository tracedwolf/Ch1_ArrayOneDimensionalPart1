//Array (One Dimensional) Part 1: Array Bounds Detective
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int array[size];

	for (int index = 0; index < size; index++) // "index < size" was intially "index <= size", which called for index out of the bounds
	{
		cin >> array[index];
	}

	cout << "Array Fixed! Problem: Incorrect Bound" << endl;
	return 0;
}