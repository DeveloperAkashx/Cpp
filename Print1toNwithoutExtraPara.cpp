#include<iostream>
using namespace std;
void print(int n)
{
	if ( n==0 ) return;
	print(n-1);
	cout<<n<<endl;
}
int main()		 // Print 1 to n without extra Paramenter
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	print(n);
}