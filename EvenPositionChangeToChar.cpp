#include<iostream>
using namespace std;
int main() 	// Even Position index Change to 'a'
{
	string s = "Skils matters in any field";
	int n = s.length();
	for(int i=0 ; i<n ; i++)
	{
		if(i%2 == 0 )
		s[i] = 'a';
	}
	cout<<"Updated String with 'a' : "<<s;
}