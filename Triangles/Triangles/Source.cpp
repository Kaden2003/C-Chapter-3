#include <iostream>
#include <string>
using namespace std;

int rightTriangle()
{
	
	double aSide;
	double bSide;
	double cSide;
	double result;
	double answer;
	double hypotenuse;
	double perimeter;
	double area;

	
	cout << "Please enter your first side ";
	cin >> aSide;
	cout << "Please enter your second side ";
	cin >> bSide;

	
	
	cSide = (aSide * bSide);
	result = cSide;	
	
	perimeter = aSide + bSide + cSide;
	
	cout << "side c is:" << result << endl;
	cout << "Would you like it to be solved?  1 for yes   2 for no ";
	cin >> answer;


	if (answer == 1)
	{
	cout << "The perimeter is: " << perimeter << endl;
	}
	else if (answer == 2)
	{
		cout << "Goodbye";
	}

	system("pause");
	return 0;
}



int main()
{

	int triangleChoice;

	cout << "Welcome to my triangle calculator!";
	cout << "Which triangle would you like to calculate?";
	cout << " 1- for right 2- for isoceles 3- for equilateral";
	cin >> triangleChoice;

	if (triangleChoice == 1)
	{
		rightTriangle();
	}
	else if (triangleChoice == 2)
	{
		
	}
	else if (triangleChoice == 3)
	{
		//equil
	}
	else
	{
		cout << "not available";
	}
}
