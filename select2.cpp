#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{

	float rectangleLength = 0
	float rectangleWidth = 0
	float circleRadius = 0;
	float cylinderHeight = 0;
	float cylinderRadius = 0;

	cout << "please input your shape." << endl;

	string input = "placeholder";

	cin >> input; cout << endl;

	if (input == "rectangle")
	{
		
		cout << "What is the length?" << endl;

		cin >> rectangleLength; cout << endl;

		cout << "What is the width?" << endl;

		cin >> rectangleWidth; cout << endl;

		cout << "The area of your rectangle is " << rectangleLength * rectangleWidth << "." << endl;

		return 0;
	}

	else 
	{
		
		{
			
			cout < "What is the radius?" << endl;

			cin >> circleradius; cout << endl;

			cout << "The area of your circle is " << 3.14 * pow(circleRadius, 2) << "." << endl;

			return 0;

		}

		else
		{

			if (input == "cylinder" or input == "Cylinder")
			{
				cout << "What is the height?" << endl;

				cin >> cylinderHeight; cout << endl;

				cout << "What is the radius?" << endl;

				cin >> cylinderRadius; cout << endl;

				cout << "The surface area of your cylinder is " << 2 * 3.14 * cylinderHeight + 2 * 3.14 * pow(cylinderRadius, 2) << "." << endl;

				cout << "The volume of your cylinder is " << 3.14 * pow(cylinderRadius, 2) * cylinderHeight << "." << endl;

				return 0;

			}
		}
	}







}