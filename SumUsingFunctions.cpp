#include<iostream>
using namespace std;
int sum(int a, int b)
{
	cout<<"Sum is : "<<a+b;
	return 0;
}
int main()
{
	int a;
	cout<<"Enter the 1st number : ";
	cin>>a; 
	int b;
	cout<<"Enter the 2nd number : ";
	cin>>b;
	sum(a,b);
}