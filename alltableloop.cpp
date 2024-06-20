#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Table that you want : ";
	cin>>n;
	for(int i=n;i<=100;i++)
	{
		if( i%n==0)
		{
			cout<<i<<endl;
		}
	}
}