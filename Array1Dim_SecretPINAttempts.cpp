//Array (One Dimensional) Part 1: Secret PIN Attempts
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int pin[size];

	for (int index = 0; index < size; index++)
	{
		int attemptNumber = index + 1;
		cout << "Attempt " << attemptNumber << ": ";
		cin >> pin[index];
	}
	int thirdAttempt = pin[2];

	return 0;
}