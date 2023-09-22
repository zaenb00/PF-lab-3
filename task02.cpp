#include <iostream>
using namespace std;

main() {
	cout<<"Number of Minutes: ";
	int min;
	cin>>min;
	min=min*60;
	cout<<"Frames per Second: ";
	int sec;
	cin>>sec;
	int total;
	total=min*sec;
	cout<<"Total Number of Frames: "<<total;
}