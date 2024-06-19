#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"X Point value : ";
	cin>>x;
	cout<<"Y point value : ";
	cin>>y;
	if( x== 0 && y==0 )
	{
		cout<<"Present at Origin";
	}
	else if( x==0 && y==y )
	{
		cout<<"Present on x-axis";
	}
	else if( x==x && y==0 )
	{
		cout<<"Present on y-axis";
	}
	else if( x>0 && y>0 )
	{
		cout<<"Present on 1st Quadrant";
	}
	else if( x<0 && y>0 )
	{
		cout<<"Present on 2nd Quadrant";
	}
	else if( x<0 && y<0 )
	{
		cout<<"Present on 3rd Quadrant";
	}
	else if ( x>0 && y<0 )
	{
		cout<<"Present on 4th Quadrant";
	}
}