#include <iostream>
#include <string>
using namespace std;

double function(double temp)
{
	double celcius;
	celcius = (temp - 32) * .5556;
	return celcius;
}

int main()
{

	double celcius;
	double celcius2;
	double celcius3;
	int legit; 
	double legit2;
	double tempArray[5] = { 0.0 };
	double z;
	double convert;

	// for loop
	// initialize an array to hold temp values
	for (int i = 0; i < size(tempArray); i++) {
		cout << " Enter the temperature  ";
		cin >> tempArray[i];
		z = function(tempArray[i]);
		cout << "The temp conversion is " << z << endl;
	}

	system("pause");
	return 0;

	

}