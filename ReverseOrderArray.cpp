#include<iostream>
using namespace std;
int main()	// Array copy to another Array in Reverse Order
{
	int arr[]={5,65,34,6,42};
	int n = sizeof(arr)/4;
	int b[n];
	for(int i=0 ; i<n ;i++)
	{
		b[i] = arr[n-1-i];
	}
	for(int i=0 ; i<n ;i++)
	{
		cout<<b[i]<<" ";
	}
}