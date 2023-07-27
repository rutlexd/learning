#include <iostream>
using namespace std;
int main() {
	int numbers[50] = {};
	cout << "enter size\n";
	int num;
	cin >> num;
	int temp = 0;
	cout << "enter numbers\n";
	for (int i = 0; i < num; i++) {
		cin >> numbers[i];
	}
	for (int i = 0; i < num; i++) {
		for(int j = i+1;j<num;j++)
			if (numbers[i] > numbers[j]) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
	}

	for (int g = 0; g < num; g++) {
		cout << numbers[g]<<" ";
	}
}
