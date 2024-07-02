#include<iostream>
using namespace std;
int main()	// Use when want to clear string
{
	string s = "Now it is simple string ";
	cout<<s<<" "<<s.length()<<endl;
	s.clear();
	cout<<s<<" "<<s.length()<<endl;
}