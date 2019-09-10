/* Kevin Lehman -  1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment  2-2 Source Code
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int rows = 2;
const int columns = 19;

double ageGender();



int main()
{
	int height;
	int heightFeet;
	int heightInches;
	int expectedHeight;
	double growthPercent;
	char rerun;

	
	growthPercent = ageGender();

	cout << "Enter your childs height in inches." << endl;
	cin >> height;

	expectedHeight = height *(100 / growthPercent);
	heightFeet = expectedHeight / 12;
	heightInches = expectedHeight % 12;

	cout << "Your child is approximately " << growthPercent << "% of their mature height." << endl;
	cout << "Your childs height is " << expectedHeight << " inches or " << heightFeet << " feet " << heightInches << " inches." << endl;
	cout << "Would you like to calculate another childs expected height? (y/n)" << endl;
	cin >> rerun;

	if (rerun == 'y')
	{
		main();
	}
	else
	{
		return 0;
	}
}

double ageGender()
{
	int age;
	int genderNum;
	char gender;
	double growth[rows][columns] = { { 28.6, 42.2, 49.5, 53.8, 58.0, 61.8, 65.2, 69.0, 72.0, 75.0, 78.0, 81.1, 84.2, 87.3, 91.5, 96.1, 98.3, 99.3, 99.8 },
									{ 30.9, 44.7, 52.8, 57.0, 61.8, 66.2, 70.3, 74.0, 77.5, 80.7, 84.4, 88.4, 92.9, 96.5, 98.3, 99.1, 99.6, 100.0, 100.0 } };
	double growthPercent;

	cout << "Enter your childs age. (0-18)" << endl;
	cin >> age;
	cout << "Enter your childs gender. (m/f)" << endl;
	cin >> gender;

	if (gender == 'm')
	{
		genderNum = 0;
	}
	else
	{
		genderNum = 1;
	}

	return growthPercent = growth[genderNum][age];
}
