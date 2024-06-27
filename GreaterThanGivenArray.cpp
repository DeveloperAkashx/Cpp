#include<iostream>
using namespace std;
int main()	// Print greater values than given number in array
{
	 int arr[]={1,3,0,10,45,34,5};
	 int n = sizeof(arr)/4;
	 int x = 4;
	 for( int i=0 ; i<n ; i++)
	 {
	 	if(arr[i]>x)
		{
		 cout<<arr[i]<<" ";
		}
	 }
}