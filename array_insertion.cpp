#include<iostream>
using namespace std;
int partition(int a[],int n,int val)
{
	for(int i=0;i<n;i++)
	{
		if(val>a[i]&&val<a[i+1])
		{
			return i+1;
		}
	}
}
int main()
{
	int n,a[100],val;
	cout<<"Enter numer of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the insert eelement"<<endl;
	cin>>val;
	int k=partition(a,n,val);
	for(int j=n-1;j>=k;j--)
	{
		a[j+1]=a[j];
	}
	a[k]=val;
	n++;
	for(int i =0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}
