#include<iostream>
using namespace std;
int main()
{
	int rows,cols;
	cout<<"Enter the Rows : ";
	cin>>rows;
	cout<<"Enter the cols : ";
	cin>>cols;
	int arr[rows][cols];
	cout<<"Enter the Elements of the Matrix : ";
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}