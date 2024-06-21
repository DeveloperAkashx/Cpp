#include<iostream>
using namespace std;
int main()
{
	int n,digit,sum=0 ;
	cout<<"Enter the Number : ";
	cin>>n;
	while(n>0)
	{
		digit= n % 10;
		if( digit % 2 == 0)
		{
			sum += digit;
		}
		n /= 10;
	}
	cout<<sum;
}