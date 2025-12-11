// *********************************************************************************************************************
// Given the length and width of a rectangle, this program computes and outputs the perimeter and area of the rectangle.
// *********************************************************************************************************************

#include <iostream>

using namespace std;

int main()
{
	double length, width, area, perimeter;
	cout << "Program to comput the area and perimeter of a rectangle." << endl;

	length = 6.0;
	width = 4.0;
	area = length * width;
	perimeter = 2 * (length + width);

	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << perimeter << endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
