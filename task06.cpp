#include <iostream>
using namespace std;

main() {
	cout << "Enter the size of the fertilizer bag in pounds: ";
	int bagsize;
	cin >> bagsize;
	cout << "Enter the cost of the bag: $";
	int bagcost;
	cin >> bagcost;
	cout << "Enter the area in square feet that can be covered by the bag: ";
	int area;
	cin >> area;
	int costperpound;
	costperpound = bagcost/bagsize;
	cout << "Cost of fertilizer per pound: $"<< costperpound<< endl;
	int costperfoot;
	costperfoot = bagcost/area;
	cout << "Cost of fertilizing per square foot: $" << costperfoot;
}