#include<iostream>
using namespace std;
int linear(int a[],int n,int search)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[100],size,search;
	cout<<"size=\n";
	cin>>size;
	for(int i=0;i<size;i++)
	cin>>a[i];
	cout<<"search=\n";
	cin>>search;
	int ans=linear(a,size,search);
	if(ans>=0)
	{
		cout<<"Found At  "<<ans;
	}
	else
	{
		cout<<"Not Found";
	}
	
	return 0;
}
