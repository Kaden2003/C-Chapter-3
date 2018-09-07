#include <iostream>
#include <string>
using namespace std;


int main()

{
	double roomPrice;
	double internetCharge;
	double amountOfDays;
	double totalBill;

	roomPrice = 120;
	internetCharge = 10; 

	
	cout << " Enter the amount of days you would like to stay ";
	cin >> amountOfDays;

	totalBill = (roomPrice + internetCharge) * amountOfDays;

	cout << " Your internet charge: " << internetCharge << endl;

	cout << " cost of room: " << roomPrice << endl;

	cout << " Your total bill: " << totalBill << endl;







	system("pause");
	return 0;




}
