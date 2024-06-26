#include<iostream>
using namespace std;
int main()			// Sum of array element with sizeof
{
	int arr[] = { 69,552,25,85,65,96,50,96,22};
	int n = sizeof(arr)/4;
	int sum = 0;
	for( int i=0 ; i<n ; i++)
	{
		sum += arr[i];
	}
	cout<<sum;
}