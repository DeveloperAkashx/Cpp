#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,5,4,7,9};
	int n = sizeof(arr)/4;
	for(int i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	int i = 0 , j = n-1;
	while(i<j)
	{
		int temp  = arr[i];
		arr[i] = arr [j];
		arr[j] = temp;
		i++;
		j--;
	}
	cout<<endl;
		for(int i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
}