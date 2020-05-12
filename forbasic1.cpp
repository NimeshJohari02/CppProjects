#include<iostream>
using namespace std;
int main()
{
	int n,a[50],b[50],i,j;
	cout<<"ENter the size of a "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		int j=n-2-i;
		b[j]=a[i];
	}
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	
	for(int i=0;i<n-1;i++)
	cout<<b[i]<<endl;
	return 0;
}
