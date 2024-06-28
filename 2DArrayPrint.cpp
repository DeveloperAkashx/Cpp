#include<iostream>
using namespace std;
int main()		// 2D Array
{
	int arr[3][3] = {3,4,5,7,8,5,4,7,2};
	for( int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
}