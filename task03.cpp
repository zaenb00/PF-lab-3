#include <iostream>
using namespace std;

main() {
	cout<<"Enter Initial Velocity (m/s): ";
	float initial;
	cin>>initial;
	cout<<"Enter Acceleration (m/s^2): ";
	float acc;
	cin>>acc;
	cout<<"Enter Time (s): ";
	int time;
	cin>>time;
	float final;
	final=time*acc+initial;
	cout<<"Final Velocity (m/s): "<<final;
}