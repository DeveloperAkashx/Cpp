#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,5,3,6,1,6,3,2};
	int product = 1;
	int n = sizeof(arr)/ 4;
	for ( int i=0 ; i<n ; i++)
	{
		product *= arr[i];
	}
	cout<<" Product of Array is : "<<product;
}