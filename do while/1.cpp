#include <iostream>
using namespace std;
int main()
{
	int sum = 0;
	int number;
	do {
		cout << "enter a number (0 to stop)" << endl;
		cin >> number;
		sum += number;
		cout << "sum = " << sum << endl;
		if (number == 0) {
			if (sum % 2 == 0) {
				cout << " even number " << endl;
			}
			else {
				cout << "not an even number" << endl;
			}
		}
	} while (number != 0);
}