#include<iostream>
#include<string>
using namespace std;
int main() // int to String
{
	int x = 496464;
	string s = to_string(x);
	s += "Akash";
	cout<<s;
}