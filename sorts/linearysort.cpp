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

























/*int search(int arr[], int key, int left, int right) {
	int midd = 0;
	while (1) {
		midd = (left + right) / 2;
		if (key > arr[midd])
			left = midd + 1;
		else if (key < arr[midd])
			right = midd - 1;
		else
			return midd;
		if (left > right)
			return -1;

	}
}

int main() {
	const int SIZE = 11;
	int arrr[SIZE];
	int i;
	for(i = 0; i < SIZE; i++) {
		arrr[i] = i + 1;
		cout << i << "|";
	}
	int key;
	cout << "\nenter key\n";
	cin >> key;
	int index = search(arrr, key, 0, SIZE);
	index >= 0 ? cout << "u index\t-\t" << index : cout << "missing in list";



}*/