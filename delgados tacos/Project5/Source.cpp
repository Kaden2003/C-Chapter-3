#include <iostream>
#include <string>
using namespace std;


int main()
{
	double tacos;
	double burritos;
	double tostados;
	double yellowrice;
	double salsa;
	double tacoprice;
	double burritoprice;
	double salsaprice;
	double tostadosprice;
	double yellowriceprice;
	int howmanytacos;
	int howmanyburritos;
	int howmuchsalsa;
	int howmanytostados;
	int howmuchrice;

	burritoprice = 2.50;
	tacoprice = 2.00;
	tostadosprice = 5.00;
	yellowriceprice = 4.00;
	salsaprice = 1.50;
	
	
	cout << " How many tacos would you like? ";
	cin >> howmanytacos;

	cout << "How many burritos would you like? ";
	cin >> howmanyburritos;

	cout << "How many tostadas would you like? ";
	cin >> howmanytostados;

	cout << "How much yellow rice would you like? ";
	cin >> howmuchrice;

	cout << "How much salsa would you like? ";
	cin >> howmuchsalsa;
	
	tacos = (tacoprice * howmanytacos);
	burritos = (burritoprice * howmanyburritos);
	yellowrice = (yellowriceprice * howmuchrice);
	tostados = (tostadosprice * howmanytostados);
	salsa = (salsaprice * howmuchsalsa);
	
	cout << " tacos total " << tacos << endl;

	cout << " burritos total " << burritos << endl;

	cout << " tostadas total " << tostados << endl;

	cout << " yellow rice total " << yellowrice << endl;

	cout << " salsa total " << salsa << endl;

	
	
	system("pause");
	return 0;






}