#include <iostream>
using namespace std;
int main()
{
	int choose;
	int x = 0;
	int y = 0;
	int storagex = -5;
	int storagey = -1;
	int charchex = 5;
	int charchey = 2;
	int schoolx = -2;
	int schooly = 5;
	do {
		cout << 
	R"(	
	1 - up
	2 - down
	3 - left
	4 - right
	0 - stop)"
	 <<"\t"<<x<<" <-- X\tY --> " << y << "\t" << endl;
		cin >> choose;
		switch (choose) {
		case 1:
			cout << "\n\tUp!\n";
			++y;
			break;
		case 2:
			cout << "\n\tDown!\n";
			--y;
			break;
		case 3:
			cout << "\n\tLeft!\n";
			--x;
			break;
		case 4:
			cout << "\n\tRight!\n";
			++x;
			break;
		default:
			cout << "\n\tIncorrect, please repeat"<<endl;
			break;
		}
		if (x == -5 && y == -1) {
			cout << "\n\tYou in storage" << endl;
		}
		else if (x == 5 && y == 2) {
			cout << "\n\tYou in chirch!" << endl;
		}
		else if (x == -2 && y == 5) {
			cout << "\n\tYou in school!" << endl;
		}
	} while (choose !=0);
}