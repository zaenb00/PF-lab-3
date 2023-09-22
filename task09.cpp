#include <iostream>
using namespace std;

main() {
	cout << "Enter a 4-digit number: ";
	int digit;
	cin >> digit;
	int num1;
	num1 = digit%10;
	int num_2;
	num_2 = digit/10;
	int num2;
	num2 = num_2%10;
	int num_3;
	num_3 = digit/100;
	int num3;
	num3 = num_3%10;
	int num_4;
	num_4 = digit/1000;
	int num4;
	num4 = num_4%10;
	int sum;
	sum = num1+num2+num3+num4;
	cout << "Sum of the individual digits: "<< sum;
}
