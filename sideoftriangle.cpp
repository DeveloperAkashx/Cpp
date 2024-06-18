#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st side triangle : ";
	cin>>a;
	cout<<"Enter 2nd side triangle : ";
	cin>>b;
	cout<<"Enter 3rd side triangle : ";
	cin>>c;
	if( (a+b)>c && (a+c)>b && (b+c)>a )
	{
		cout<<"Valid Triangle";
	}
	else
	{
		cout<<"invalid Triangle";
	}
}