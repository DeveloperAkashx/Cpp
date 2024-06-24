#include<iostream>
using namespace std;
int main()				// Pointer used to store the address
{
	int x = 5;
	int* ptr = &x;
	cout<<&x<<endl;
	cout<<ptr<<endl;
	cout<<x<<endl;
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
}