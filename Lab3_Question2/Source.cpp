// Determine average life expectancy of a standard lightbulb.

#include <iostream>
using namespace std;

int main()
{
	int watts;
	int life;

	cout << "Enter the watts of the lightbulb: ";
	cin >> watts;

	switch (watts)
	{
		case 25:
			life = 2500;
			break;
		case 40:
		case 60:
			life = 1000;
			break;
		case 75:
		case 100:
			life = 750;
			break;
		default:
			life = 0;
	}

	cout << "Average life expectancy of a " << watts << " watts lightbulb is " << life << endl;
}