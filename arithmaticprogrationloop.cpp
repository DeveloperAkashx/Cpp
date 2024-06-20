#include<iostream>
using namespace std;
int main()	// Print 1 3 5 7 9 ...... 
{
	int n;
	cout<<"Enter the value : ";
	cin>>n;
	for ( int i=1;i<=2*n-1;i+=2)
	{
		cout<<i<<" ";
	}
}