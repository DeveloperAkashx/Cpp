#include<iostream>
using namespace std;
int main()			// Add Two Matrices
{
	int arr[2][2]={2,3,5,6};
	int arrx[2][2]={8,9,7,4};
	int c[2][2];
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			cout<<arrx[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			c[i][j] = arr[i][j] + arrx[i][j];
		}
		cout<<endl;
	}
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
		cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}