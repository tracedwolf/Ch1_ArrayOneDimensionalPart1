//Array (One Dimensional) Part 1: Cinema Seating Booking
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int seats[size];

	cout << "Enter the seats:\n";
	for (int index = 0; index < size; index++)
	{
		int seatNum = index + 1; //Display Number
		cout << "Seat " << seatNum << ": ";
		cin >> seats[index];
	}

	cout << "Enter the new Second Seat Value to be updated: ";
	cin >> seats[1];

	cout << "Updated Seats: ";
	for (int index = 0; index < size; index++)
	{
		cout << seats[index] << " ";
	}
	cout << endl;
	return 0;
}