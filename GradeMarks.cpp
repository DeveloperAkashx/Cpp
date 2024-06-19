#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"Enter the Percentage : ";
	cin>>n;
	if( n>=81 && n<=100 )
	{
		cout<<"Very Good Marks";
	}
	else if( n>=61 && n<=80 )
	{
		cout<<"Good Marks";
	}
	else if( n>=41 && n<=60 )
	{
		cout<<"Average Marks";
	}
	else	//( n<=40 )
	{
		cout<<"Fail";
	}
}