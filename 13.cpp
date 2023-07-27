#include <iostream>
using namespace std;

int main() {
	int deposit;
	float prothent;
	float profit = 0;
	int years;
	int a = 1;
	cout << "enter u depoit\n";
	cin >> deposit;
	cout << "enter u year's prothent\n";
	cin >> prothent;
	cout << "enter years\n";
	cin >> years;
	while (a <= years) {
		profit = deposit + (deposit * (prothent * 0.01));
		cout << a++ << " years " << "u profit = " << profit << " = " << deposit << " + " << deposit * (prothent * 0.01) << endl;
		deposit = profit;

	}
}