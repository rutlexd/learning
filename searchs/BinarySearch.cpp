#include <iostream>
using namespace std;

int SearchBinary(int arr[], int left, int right, int key) {
	int mid = 0;
	while (1) {

		mid = (left + right) / 2;

		if (key < arr[mid])       
			right = mid - 1;      
		else if (key > arr[mid])  
			left = mid + 1;    
		else                       
			return mid;           

		if (left > right)          
			return -1;
	}
}

int main() {
	const int SIZE = 10000;
	int array[SIZE] = {};
	int key = 0;
	int index = 0;

	for (int i = 0; i < SIZE; i++) 
	{

		array[i] = i + 1;
		cout << array[i]<< " | ";

	}


	cout << "What num u need search?\n";
	cin >> key;

	index = SearchBinary(array, 0, SIZE, key);

	(index >= 0)
		?cout << "Yor num index - " << index <<"\n"
		:cout << "erorrrr";

}
