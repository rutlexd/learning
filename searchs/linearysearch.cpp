#include <iostream>
using namespace std;

int search(int arr[],int key,int SIZE) {
	for (int i = 0; i < SIZE; i++)
		if (arr[i] == key)
			return i;
	for (int i = 0; i < 12; i++)
		if (arr[i] != key)
			return -1;


}	

int main() {
	const int SIZE = 12;
	int array[SIZE] = {};
	int index = 0;
	int key = 0;
	for (int i = 0; i < SIZE; i++) {

		array[i] = i + 1;
		cout << array[i] << " | ";
		
	}

	cout << "key?\n";
	cin >> key;

	index = search(array, key, SIZE);

	index>=0
		? cout << key << " in this list " << index
		: cout << "not in this list";



}
