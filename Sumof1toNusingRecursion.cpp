#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==1) return 1;
	return n + sum(n-1);
}
int main()			// Sum of 1 to n using Recursion
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	cout<<sum(n);
}