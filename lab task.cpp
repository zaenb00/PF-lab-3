#include <iostream>
using namespace std;

main() {
	cout << "Enter the height of the cylinder: ";
	float h;
	cin >> h;
	cout << "Enter the radius of the cylinder: ";
	float r;
	cin >> r;
	float Area;
	Area = 2*3.14*(r*h+r*r);
	cout << "The area of cylinder is: " << Area;
}  