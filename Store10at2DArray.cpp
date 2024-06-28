#include<iostream>
using namespace std;
int main()
{
	int  arr[5][5]; // = {4,5,6,1,2,3,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7};
	for(int i=0 ; i<=4 ; i++)
	{
		for( int j=0 ; j<5 ; j++)
		{
			arr[i][j] = 10;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
//	for(int i=0 ; i<=4 ; i++)
//	{
//		for( int j=0 ; j<5 ; j++)
//		{
//		//	arr[i][j] = 10;
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
}