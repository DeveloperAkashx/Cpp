#include<iostream>
using namespace std;
int main() // Count the Vowels Present in a String
{
	string s = "test the code and execute!";
//	cout<<s;
	int count = 0;
	for(int i=0 ; i<s.length() ; i++)
	{
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
		count++;
	}
	cout<<" Vowels is : "<<count;
}