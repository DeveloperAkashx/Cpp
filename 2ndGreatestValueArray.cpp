#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,44,56,23,7,4};
	int n = sizeof(arr)/4;
	int mx= INT_MIN ;
	for( int i=0 ; i<n ; i++)
	{
		mx= max(mx,arr[i]);
	}
	int smax= INT_MIN ;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i] != mx) smax= max(smax,arr[i]);	
	}
	cout<<smax;
}