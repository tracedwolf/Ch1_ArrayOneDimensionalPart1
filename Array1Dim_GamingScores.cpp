//Array (One Dimensional) Part 1: Gaming Scores Display
#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int score[size];

	cout << "Input each round score:\n";
	for (int index = 0; index < size; index++)
	{
		int roundNumber = index + 1;
		cout << "Round " << roundNumber << ": ";
		cin >> score[index];
	}

	cout << endl;
	cout << "Final Scores:\n";
	for (int index = 0; index < size; index++)
	{
		cout << score[index] << " ";
	}

	return 0;
}