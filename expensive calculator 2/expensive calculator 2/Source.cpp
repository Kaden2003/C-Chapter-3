#include <iostream>
#include <string>
using namespace std;


int main()
{
	string namestring;

	int firstnum;
	int secondnum;
	int add;
	int subtract;
	int multiply;
	int divide;
	int remainder;

	cout << "What is your name? ";
	cin >> namestring;

	cout << "Please enter your first number? ";
	cin >> firstnum;

	cout << "Please enter your second number ";
	cin >> secondnum;

	add = firstnum + secondnum;

	subtract = firstnum - secondnum;

	multiply = firstnum * secondnum;

	divide = firstnum / secondnum;

	remainder = firstnum % secondnum;

	cout << "The sum of " << firstnum << " and " << secondnum << " = " << add << endl; 
	cout << "The difference of" << firstnum << " and " << secondnum << " = " << subtract << endl;
	cout << " The multiple of " << firstnum << " and " << secondnum << " = " << multiply << endl;
	cout << " The dividen of " << firstnum << " and " << secondnum << " = " << divide << endl;
	cout << " The remainder of " << firstnum << " and " << secondnum << " = " << remainder << endl;

	system("pause");

	return 0;
}