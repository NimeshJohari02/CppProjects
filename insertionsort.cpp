#include<iostream>
using namespace std;
int main()
{
	
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=1;i<n;i++)
	{
		int j=i-1;
		int temp=a[i];
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
	return 0;
}
