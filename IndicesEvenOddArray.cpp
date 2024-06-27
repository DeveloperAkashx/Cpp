#include<iostream>
using namespace std;
int main()	// Find Difference Between Even Odd indices Sum
{
	int arr[]={15,3,0,10,2,5,6};
	int n = sizeof(arr)/4;
	int sumeven =0;
	int sumodd =0;
	for(int i=0 ; i<n ; i++)
	{
		if(i%2 == 0)
		{
		sumeven +=  arr[i];
		}
		else 
		{
		sumodd += arr[i];
		}
	}
	cout<<sumeven - sumodd<<" ";
}