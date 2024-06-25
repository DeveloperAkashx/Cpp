#include<iostream>
using namespace std;
void recursion( int n)
{
	if( n == 101)  return;
 	cout<<n<<endl;
	recursion( n + 1);
}
int main()				// Recursion Print 1 to n 
{
	recursion(1);	
}