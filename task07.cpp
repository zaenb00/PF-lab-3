#include <iostream>
using namespace std;

main() {
	cout << "Enter the movie name: ";
	string movie;
	cin >> movie;
	cout << "Enter the adult ticket price: $";
	int adult;
	cin >> adult;
	cout << "Enter the child ticket price: $";
	int child;
	cin >> child;
	cout << "Enter the number of adult tickets sold: ";
	int adultsold;
	cin >> adultsold;
	cout << "Enter the number of child tickets sold: ";
	int childsold;
	cin >> childsold;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	int giveaway;
	cin >> giveaway;
	cout<<endl;
	cout << "Movie: "<<movie<< endl;
	int totalearn;
	totalearn = adult * adultsold + child * childsold;
	cout << "Total amount generated from ticket sales: $" << totalearn<< endl;
	int donation;
	donation = totalearn *0.1;
	cout << "Donation to charity ("<< giveaway <<"%): $"<< donation << endl;
	int remaining;
	remaining = totalearn-donation;
	cout << "Remaining amount after donation: $"<< remaining;
}
