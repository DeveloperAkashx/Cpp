#include<iostream>
using namespace std;
int main()
{
	int arr[2][2]={2,8,4,1};
	int mx = INT_MIN ;
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			mx = max(mx,arr[i][j]);
		}
		cout<<mx<<endl;
	}
}