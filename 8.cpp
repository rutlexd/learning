#include <iostream>
using namespace std;

int main() {
	int min, max;
	cout << "enter min,max\n";
	cin >> min >> max;
	int a;
	if (max < min) {
		a = max;
		max = min;
		min = a;
	}

	int num = min;
	int sum = 0;
	while (num <= max) {
		sum += num;
		num++;

	}
	cout << sum;
}