#include<iostream>
using namespace std;
int seq(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else if(n==3)
	{
		return 1;
	}
	else
	{
		return (3*seq(n-1)+2*seq(n-3)+1);
	}
}
int main()
{
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		int j;
		cin>>j;
		a[i]=j;
	}
	for(int i=0;i<n;i++)
	{
		cout<<seq(a[i])<<endl;
	}
	return 0;
}
