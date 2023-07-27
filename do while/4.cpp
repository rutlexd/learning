#include <iostream>
using namespace std;
int main()
{
	int choose;
	int x = 0;
	int y = 0;
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
		
		
			
		

	} while (choose !=0);
}