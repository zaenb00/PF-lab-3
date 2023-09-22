#include <iostream>
using namespace std;

main() {
	cout << "Number of square meters you can paint: ";
	int sqm;
	cin >> sqm;
	cout << "Width of the single wall (in meters): ";
	int w;
	cin >> w;
	cout << "Height of the single wall (in meters): ";
	int h;
	cin >> h;
	int area;
	area = w*h;
	int walls;
	walls = sqm/area;
	cout << "Number of walls you can paint: "<< walls;
}