#include<iostream>
using namespace std;

main()
{
	int selection;
	float radius;
	float side;
	float base;
	float height;
	float area_circle;
	float area_square;
	float area_triangle;
	const float PI = 3.1416;
	
	cout << "This program computes the area of a circle, square, or triangle.";
	cout << "\nPress 1 for a circle, 2 for a square, and 3 for a triangle.";
	cout << "\n\nEnter your selection: ";
	cin >> selection;
	
	switch (selection)
	{
		case 1:
			cout << "You have selected a circle.";
			cout << "\nEnter the radius of the circle: ";
			cin >> radius;
			area_circle = PI * (radius*radius);
			cout << "\nThe area of the circle is " << area_circle << ".";
		break;

		case 2:
				cout << "You have selected a square.";
				cout << "\nEnter the side of the square: ";
				cin >> side;
				area_square = side * side;
				cout << "\nThe area of the square is " << area_square << ".";
		break;

		case 3:
			cout << "You have selected a triangle.";
			cout << "\nEnter the base of the triangle: ";
			cin >> base;
			cout << "Enter the height of the triangle: ";
			cin >> height;
			area_triangle = 0.5 * (base * height);
			cout << "\nThe area of the triangle is " << area_triangle << ".";
		break;

		case 4:
			cout << "Invalid Entry! Program Terminating!!!";
		break;
	}
}
