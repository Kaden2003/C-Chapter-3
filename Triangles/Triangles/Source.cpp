#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int rightTriangle()
{
	
	double aSide;
	double bSide;
	double cSide;
	double result;
	double answer;
	double perimeter;
	double area;

	
	cout << "Please enter one angle number ";
	cin >> aSide;
	cout << "Please enter one angle number  ";
	cin >> bSide;
	                                                                           
	
	
	cSide = (aSide * bSide);
	result = cSide;	
	
	perimeter = aSide + bSide + cSide;
	area = (aSide * bSide) / 2;
	
	cout << "side c is:" << result << endl;
	cout << "Would you like it to be solved?  1 for yes   2 for no ";
	cin >> answer;


	if (answer == 1)
	{
	cout << "The perimeter is: " << perimeter << endl;
	cout << "The area is: " << area << endl;
	}
	else if (answer == 2)
	{
		cout << "Goodbye";
	}

	system("pause");
	return 0;
}

int iso()
{

	double base;
	double height;
	double area2;
	double perimeter2;

	cout << "Please enter the base number ";
	cin >> base;
	cout << " Please enter the height number ";
	cin >> height;
	
	area2 = (base * height) / 2;
	perimeter2 = (base + height);

	cout << "The area is:" << area2 << endl;
	cout << "The perimeter is: " << perimeter2 << endl;

	system("pause");
	return 0;



}

int equil()
{

	double side;
	double perimeter3;
	double side2;
	double side3;
	double area3;
	
	
	cout << "Please enter your side ";
	cin >> side; 

	cout << "Please enter your side ";
	cin >> side2;

	cout << "Please enter your side ";
	cin >> side3;

	
	perimeter3 = side + side2 + side3;
	area3 = (sqrt(3) / 4)*(side*side);

	cout << "Your perimeter is: " << perimeter3 << endl;
	cout << "The area is: " << area3 << endl;
	
	 


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
		iso();
	}
	else if (triangleChoice == 3)
	{
		equil();
	}
	else
	{
		cout << "not available";
	}
}
