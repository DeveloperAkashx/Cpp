#include<iostream>
using namespace std;
int main()	// TypeCasting method to take integer but output in float
{
	int x;
	cout<<"Enter the value : ";
	cin>>x;
	float y = (float)x;
	cout<<"Half of value : "<<y/2;		
}