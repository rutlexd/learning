#include <iostream>
using namespace std;
int main()
{
	int d1;
	int d2;
	int dd1;
	int dd2;

	cout << "\n\tenter range (firs num must be more second num)\n\t";
	cin >> d1;
	cout << "\n\t";
	do
	{
		cin >> d2;
		if (d2 < d1) {
			cout << "\n\tIncorrect, second num must be more first\n\t";
		}
	} while (d2<d1);

	cout << "\n\tEnter range in previous range\n\t";
	do
	{
		cin >> dd1;
		cout << "\n\t";
		cin >> dd2;
		if (dd1<d1 or dd1>d2 or dd2 <d1 or dd2 > d2) {
			cout << "\n\tIncorrect, must be in previous range!\n\t";
		}
		if (dd2 < dd1) {
			cout << "\n\tSecond num must be more first!\n\t";
		}
	} while (dd1<d1 or dd1>d2 or dd2 <d1 or dd2 > d2);

	int a = d1;
	while (a < dd1) {
		cout << a++<<" ";
	}
	int b = dd2 +1;

	while (b <= d2) {
		cout << b++ << " ";
	}
}