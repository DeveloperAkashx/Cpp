#include<iostream>
using namespace std;
int main()	// Calculator using Switch statement
{
	int a;
	cin>>a;
	char op;	//operator
	cin>>op;
	int b;
	cin>>b;
	switch(op)
	{
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			cout<<a/b<<endl;
			break;
		default:
			cout<<"Invalid Operator"<<endl;
	}
}