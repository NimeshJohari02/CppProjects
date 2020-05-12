#include<iostream>
using namespace std;
void increment (int x,int y,int z,int a,int b,int c)
{
	x=x+a;
	y=y+b;
	z=z+c;
	cout<<x<<y<<z;
}
void increment(int x,int y,int z,int a,int b)
{
	x=x*(a+b);
	
	y=y*(a+b);
	z=z*(a+b);
		cout<<x<<y<<z;
}
void increment(int x,int y,int z, int a)
{
	x=x+a;
	y=y+a;
	z=z+a;
		cout<<x<<y<<z;
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int a,b,c;
	cin>>a;
	increment(x,y,z,a);
	cin>>a>>b;
	increment(x,y,z,a,b);
	cin>>a>>b>>c;
	increment(x,y,z,a,b,c);
	
}
