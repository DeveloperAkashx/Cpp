// write a program to store roll number and marks obtained by 
// 4 students side by side in a matrix.
#include<iostream>
using namespace std;
int main()
{
	int arr[4][2] = { {76,81},{13,76},{82,91},{88,90} };
	for( int i=0 ; i<2 ; i++)
	{
		for( int j=0 ; j<4 ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
}