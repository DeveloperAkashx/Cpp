#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	int i=0;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	cout<<i;
}