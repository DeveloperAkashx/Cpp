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
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is greater";
		}
		else
		{
			cout<<c<<" is greater";
		}
	}
	else	//b>a
	{
		if(b>c)
		{
			cout<<b<<" is greater";
		}
		else
		{
			cout<<c<<" is greater";
		}
	}
}