#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if( n > 99 && n < 1000)
	{
		cout<<"This number is Three digit number";
	}
	else
	{
		cout<<"This not three digit number";
	}
}