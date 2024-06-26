#include<iostream>
using namespace std;
int main()		// Sum of all element
{
	int arr[]={ 3,4,7,9,2};
	int sum=0;
	for( int i=0 ; i<=4 ; i++)
	{
		sum += arr[i];
	}
	cout<<sum;
}