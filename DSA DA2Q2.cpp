#include<iostream>
using namespace std;
int fac(int n)
{
	if(n==1)
	{
		return 1;
		
	}
	else
	{
		return (n*fac(n-1));
	}
}
int rec(int n) 
{
	if(n>4)
	{
		return(n*rec(n-1)+fac(n));
	}
}
int main()
{
	for(int i=4;i<10;i++)
	cout<<rec(i)<<endl;	
	return 0;
}
