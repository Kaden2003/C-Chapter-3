#include <iostream>
#include <string>
using namespace std;


int main()
{
	int britishPounds;
	int mexicanPesos;
	int japaneseYen;
	int americanDollars;

	cout << " Please enter the amount you would like to convert ";
	cin >> americanDollars;

	britishPounds = americanDollars * .6318;
	mexicanPesos = americanDollars * 12.8863;
	japaneseYen = americanDollars * 82.34;

	cout << " British Pounds: " << britishPounds << " Mexican Pesos: " << mexicanPesos << " Japanese Yen " << japaneseYen << endl;

		system("pause");

	return 0;
}