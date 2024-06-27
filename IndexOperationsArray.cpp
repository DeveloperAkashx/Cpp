#include<iostream>
using namespace std;
int main()	// change the value of all odd indexed element
			// increment all even indexed value by 10
{
	int arr[5]={1,2,3,4,5};
	for( int i=0 ; i<4 ; i++)
	{
		if(i%2 == 0) arr[i] += 10;
		if(i%2 != 0) arr[i] *= 2;
		cout<<arr[i]<<" ";
	}
}