#include <iostream>
#include <string>
using namespace std;

int main()
{
	int howmany;
	int dozens;
	int eggsremaining;
	int alleggs;
	int dozenamount;
	double priceper;
	double price; 
	int remainder;
	double remainder2;



	
	cout << " How many eggs would you like? ";
	cin >> howmany;

	alleggs = 500;
	dozenamount = 12;
	dozens = (alleggs / dozenamount);
	eggsremaining = (alleggs - howmany);
	price = (2.00);
	priceper = (price * dozenamount);
	remainder = 0.25;
	remainder2 = (remainder % dozens);
	
	
	

	cout << " amount of eggs " << alleggs << endl;

	cout << " Amount of dozens: " << dozens << endl;

	cout << " Egg remaining: " << eggsremaining << endl;

	cout << " Price of dozens " << priceper << endl;

	cout << " Remainder eggs " << remainder2 << endl; 

	
	
		
	
	system("pause");
	return 0;



	



}