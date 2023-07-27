#include <iostream>
using namespace std;
int main()
{
	double people;
	double uaspeak;

	do
	{
		cout << "\n\tEnter population your city(>0)\n\t\t";
		cin >> people;
	} while (people<=0);
	do
	{
		cout << "\n\tHow many people speak Ukrainian?(>0)\n\t\t";
		cin >> uaspeak;
	} while (uaspeak <= 0);
	double result = uaspeak / people * 100;
	cout << "\n\tU speak Ukrainian with " <<result<< "% chance!" << endl;
}