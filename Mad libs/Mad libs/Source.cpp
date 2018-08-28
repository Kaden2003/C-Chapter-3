#include <iostream>
#include <string>
using namespace std;

int main()
{

	string namestring;

	string color;
	string est;
	string bodypart;
	string animal;
	string noun;
	string pluralnoun;

	int a; 
	int b;
	int c;
	c = a - b;

	cout << " Name a color ";
	cin >> color;

	cout << " Word ending in est ";
	cin >> est;

	cout << " Body part ";
	cin >> bodypart;

	cout << " animal ";
	cin >> animal;

	cout << " Noun ";
	cin >> noun;

	cout << " pluralnoun ";
	cin >> pluralnoun;

	c = a - b;

	cout << " The " << color << "Dragon is the " << est << " Dragon of all. It has " << c << " " << bodypart << ", and a " << animal << "shaped like a " << noun << " . It loves to eat " << pluralnoun << " , althought it will feast on nearly anything. ";

	system("pause");

	return 0;
}