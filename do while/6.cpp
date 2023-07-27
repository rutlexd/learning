#include <iostream>
using namespace std;
int main()
{
	int people;
	int uaspeak;

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

	cout << "\n\tU speak Ukrainian with " << people / 100 * uaspeak << "% chance!" << endl;
}