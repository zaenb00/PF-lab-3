#include <iostream>
using namespace std;

main() {
	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegPrice;
	cin >> vegPrice;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruPrice;
	cin >> fruPrice;
	cout << "Enter total kilograms of vegetables: ";
	float totalkgvegs;
	cin >> totalkgvegs;
	cout << "Enter total kilograms of fruits: ";
	float totalkgfru;
	cin >> totalkgfru;
	float vegs;
	vegs = vegPrice*totalkgvegs/1.94;
        float fru;
	fru = fruPrice*totalkgfru/1.94;
	float earnRs;
	earnRs = vegs + fru;
	cout << "Total earnings in Rupees (Rps): " << earnRs;
}
