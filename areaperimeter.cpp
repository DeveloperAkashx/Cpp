#include<iostream>
using namespace std;
int main()
{
	float l,b;
	float area = l*b;
	float perimeter = 2*(l+b);
	cout<<"Enter the length : ";
	cin>>l;
	cout<<"Enter the Breadth : ";
	cin>>b;
	cout<<"Area is : "<<l*b<<endl;
	cout<<"Perimeter is "<<2*(l+b)<<endl;
	if( area > perimeter )                 
	{
		cout<<"Area of recangle is greater than its Perimeter";
	}
	else if( area == perimeter )
	{
		cout<<"Area and Perimeter is equal";
	}
	else
	{
		cout<<"Perimeter is greater than area";
	}
}