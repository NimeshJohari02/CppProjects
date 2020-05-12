#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(a[j]>=a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j=0;
	int b[n-1];
	for(int i=0;i<n-1;i++)
	{
		int d=a[i+1]-a[i];
		b[j]=d;
		j++;
	}
	bubble(b,j);
	int z;
	cin>>z;
	cout<<(b[j-1]^z);
	
}
	return 0;
}
