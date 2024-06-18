#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if( (n % 5 == 0 || n % 3 == 0) && (n % 15 != 0) )
	{
		cout<<"Valid divisible by 5 or 3 but not by 15";
	}
	else
	{
		cout<<"invalid";
	}
}