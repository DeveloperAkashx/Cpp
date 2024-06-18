#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter 1st value : ";
	cin>>x;
	cout<<"Enter 2nd value : ";
	cin>>y;
	cout<<"Enter 3rd value : ";
	cin>>z;
	if( x < y && x < z )
	{
		cout<<x<<" is smallest value";
	}
	else if( y < x && y < z )
	{
		cout<<y<<" is smallest value";
	}
	else
	{
		cout<<z<<" is smallest value";
	}
}