#include<iostream>
using namespace std;
int main()
{
	string s = "Akash";
	cout<<s<<" "<<s.length()<<endl;
	s = s + " Patil";
	s = "Mr. " + s;
	cout<<s<<" "<<s.length()<<endl;
}