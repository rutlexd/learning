
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 50;
	int arr[SIZE];
	cout << "enter size \n";
	int num;
	cin >> num;
	cout << "enter numbers\n";
	for (int i = 0; i < num; i++) 
		cin >> arr[i];


	int min;
	int temp;


	for (int i = 0; i < num; i++) {
		min = i;
		for (int j = i + 1; j < num; j++) {
			min = (arr[min] > arr[j]) ? j : min;
		}
		if (i != min) {
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	for (int i = 0; i < num; i++)
		cout << arr[i] << "   ";
}