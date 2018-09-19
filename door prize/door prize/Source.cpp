#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int gameOne() 
{
	int doorChoice;
    
	cout << "Choose a door";
	cin >> doorChoice;
	

	if (doorChoice == 1)
	{
		cout << "You are a winner!";
	}
	else if (doorChoice == 2)
	{
		cout << "Sorry you lose";
	}
	else if (doorChoice == 3)
	{
		cout << "Sorry you lose";
	}
	else
	{
		cout << "Leave now";

	}
	system("pause");
	return 0;
	
	
}

int gameTwo()
{
	int numberChoice;
	int number;

		number = rand() % 10 + 1;
		cout << "Enter a number between 1 and 10" << endl;
		cin >> numberChoice;
		if (numberChoice != number)
		{
			cout << "Sorry your wrong!" << endl;
		}
		else if (number == numberChoice)
		{
		cout << "Good job you guessed it! " << endl;
		}
	
		system("pause");
		return 0;
}

int gameThree()
{
	int numberChoice2;
	int number2;

	number2 = rand() % 100 + 1;
	cout << "Enter a number between 1 and 100" << endl;
	cin >> numberChoice2;
	if (numberChoice2 != number2)
	{
		cout << "Sorry your wrong!" << endl;
	}
	else if (number2 == numberChoice2)
	{
		cout << "Good job you guessed it! " << endl;
	}

	system("pause");
	return 0;
}
	



	
	


//int gameThree()
//{
//int numberChoice2;
//
//
//
//
//
//
//}


	int main()
	{
		int gamemodes;

		cout << "1 = doorchoice 2 = number game 1  3 = number game 2 ";
		cin >> gamemodes;

		if (gamemodes == 1)
		{
			gameOne();
		}
		else if (gamemodes == 2)
		{
			gameTwo();
		}
		else if (gamemodes == 3)
		{
			gameThree();
		}
		else if (gamemodes == 4)
		{
			cout << "Not Available";
		}

		//1 - doorchoice
		//2 - Pick a number between 1-10
		//3 - pick a number between 1-100

		//system("pause");
		//return 0;
	}