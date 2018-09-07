#include <iostream>
#include <string>
using namespace std;

int main()
{
	int time1;
	int time2;
	int time3;
	double celcius;
	double celcius2;
	double celcius3;
	int legit; 
	double legit2;
	


	cout << " Enter the temperature at 8:00 AM ";
	cin >> time1;

	cout << " Enter the temperature at 12:00 PM ";
	cin >> time2;

	cout << " Enter the temperature at 5:00 PM ";
	cin >> time3;

	legit = 32;
	legit2 = .5556;

	celcius = (time1 - legit) * legit2;
	
	celcius2 = (time2 - legit) * legit2;
	
	celcius3 = (time3 - legit) * legit2;

	
	cout << " temperature at 8:00 AM " << celcius << endl;

	cout << " temperature at 12:00 PM " << celcius2 << endl;

	cout << " temperature at 5:00 PM " << celcius3 << endl;

	system("pause");
	return 0;

	

}