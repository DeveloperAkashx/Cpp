#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
 int a,b,c;
cin>>a>>b>>c;
if(1<=a && a<=1000 && 1<=b && b<=1000 && 1<=c && c<=1000)
{
int sum=a+b+c;
cout<<sum<<endl;
}
    return 0;
}
