#include<iostream>
using namespace std;
void greet()	// Recursion - Calling Function itself
{
	cout<<"Hey!"<<endl;
	greet();
}
int main()
{
	greet();	
}