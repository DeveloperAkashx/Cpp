#include<iostream>
using namespace std;
void swap(int& x, int& y)	// Pass by reference
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
int main()
{
	int x=22 , y=33 ;
	cout<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<x<<" "<<y<<endl;
}