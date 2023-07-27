#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int number;
	int positive = 0;
	int negative = 0;
	do {
		cout << "enter a number (0 to stop)" << endl;
		cin >> number;
		sum += number;
		if (number > 0) {
			positive++;
		}
		else if (number < 0) {
			negative++;
		}
		if (number == 0) {
			cout << "\nPositive - "<<positive<<"\nNegative - "<<negative<< endl;
		}
	} while (number != 0);
}