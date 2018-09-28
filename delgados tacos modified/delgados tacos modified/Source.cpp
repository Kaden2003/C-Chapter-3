#include <iostream>
#include <string>
using namespace std;


int main()
{
	double tacoprice;
	double burritoprice;
	double salsaprice;
	double tostadosprice;
	double yellowriceprice;
	double totalPrice;
	double totalwithtax = 0;
	double taxrate = 1.075;
	int howmanytacos = 0;
	int howmanyburritos = 0;
	int howmuchsalsa = 0;
	int howmanytostados = 0;
	int howmuchrice = 0;
	int foodChoice = 0;
	int orderagain;



	burritoprice = 2.50;
	tacoprice = 2.00;
	tostadosprice = 5.00;
	yellowriceprice = 4.00;
	salsaprice = 1.50;


	cout << "The menu is burritos, tacos, tostados, yellowrice, and salsa" << endl;
	cout << "1 for burrito 2 for tacos 3 for tostados 4 for yellowrice 5 for salsa";
	cin >> foodChoice;

	if (foodChoice == 1)
	{
		cout << " How many tacos would you like? ";
		cin >> howmanytacos;
	}
	else if (foodChoice == 2)
	{
		cout << "How many burritos would you like? ";
		cin >> howmanyburritos;
	}
	else if (foodChoice == 3)
	{
		cout << "How many tostadas would you like? ";
		cin >> howmanytostados;
	}
	else if (foodChoice == 4)
	{
		cout << "How much yellow rice would you like? ";
		cin >> howmuchrice;
	}

	else if (foodChoice == 5)
	{
		cout << "How much salsa would you like? ";
		cin >> howmuchsalsa;
	}

	

	totalPrice = (burritoprice * howmanyburritos) + (tacoprice * howmanytacos) + (yellowriceprice * howmuchrice) + (tostadosprice * howmanytostados) + (salsaprice * howmuchsalsa);
	totalwithtax = totalPrice * taxrate;

	cout << "Your total price is:" << totalPrice << endl;
	cout << "Your total with tax is: " << totalwithtax << endl;
	cout << "Would you like to order again? 1 for yes 2 for no";
	cin >> orderagain;

	if (orderagain == 1) {

	}


	system("pause");
	return 0;






}