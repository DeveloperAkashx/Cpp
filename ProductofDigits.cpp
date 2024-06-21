#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number : ";
	cin>>n;
	int Product=1;
	while(n!=0)
	{
		int ld=n%10;
		n/=10;
		Product *= ld;
	}
	cout<<Product;
}