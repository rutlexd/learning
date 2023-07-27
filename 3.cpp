#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "enter stop num\n";
	cin >> num;
	int number = 1;

	while (num <= 0) {
		cout << "u enter incorrect num, try again\n";
		cin >> num;
	}


	while (number <= num) {
		cout << "\n" << number++ << "\t\n";
	}
}