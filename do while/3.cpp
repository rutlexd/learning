#include <iostream>
using namespace std;
int main()
{
	int choose;
	do {
		cout << 
	R"(	
	1 - up
	2 - down
	3 - left
	4 - right
	0 - stop)"
	 << endl;
		cin >> choose;
		switch (choose) {
		case 1:
			cout << "\n\tUp!\n";
			break;
		case 2:
			cout << "\n\tDown!\n";
			break;
		case 3:
			cout << "\n\tLeft!\n";
			break;
		case 4:
			cout << "\n\tRight!\n";
			break;
		default:
			cout << "\n\tIncorrect, please repeat"<<endl;
			break;
		}
		
		
			
		

	} while (choose !=0);
}