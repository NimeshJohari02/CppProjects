#include<iostream>
using namespace std;
int main()
{
	int a[100],b[100];
	int n,pos,val;
	cout<<"n="<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"insert =?"<<endl;
	cin>>val;
	cout<<"position?"<<endl;
	cin>>pos;
	for(int i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n++;
	for(int i=0;i<n;i++)
	cout<<a[i]<<"   ";   
	
	return 0;
}
