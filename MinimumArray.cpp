#include<iostream>
using namespace std;
int main()			// Find the Minimum Value in Array
{
	int arr[5]={2,4,5,8,3};
	int n = sizeof(arr)/4;
	int min = arr[0];
	for( int i=1 ; i<n ; i++)
	{
		if(arr[i]<min) min = arr[i];
	}
	cout<<"Your minimum value is "<<min;
}
