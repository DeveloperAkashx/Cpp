#include<iostream>
using namespace std;
int main()
{
	float cp,sp;
	cout<<"Enter cost price : ";
	cin>>cp;
	cout<<"Enter selling price : ";
	cin>>sp;
	if( cp < sp )
	{
		cout<<"Profit is : "<<sp-cp;
	}
	else if( cp > sp )
	{
		cout<<"Loss is : "<<cp-sp;
	}
	else //( cp == sp )
	{
		cout<<"NO Loss NO Profit";
	}
}