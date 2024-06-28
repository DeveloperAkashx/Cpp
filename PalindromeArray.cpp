#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,2,1};
	int n = sizeof(arr)/4;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[0] == arr[4] && arr[1] == arr[3])
		cout<<"This is Palindrome Array"<<endl;
		else
		cout<<"This is not Palinndrome Array"<<endl;
	}
}