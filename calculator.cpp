#include<iostream>
using namespace std;
int main()	// Calculator
{
	int a;
	cin>>a;
	char op;	//operator
	cin>>op;
	int b;
	cin>>b;
	if(op=='+') cout<<a+b;
	if(op=='-') cout<<a-b;
	if(op=='*') cout<<a*b;
	if(op=='/') cout<<a/b;
}