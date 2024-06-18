#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st value : ";
	cin>>a;
	cout<<"Enter 2nd value : ";
	cin>>b;
	cout<<"Enter 3rd value : ";
	cin>>c;
	if( a > b && a > c )
	{
		cout<<"Greatest number is : "<<a;
	}
	else if( b > a && b > c )
	{
		cout<<"Greatest number is : "<<b;
	}
	else
	{
		cout<<"Greatest number is : "<<c;	
	}
}