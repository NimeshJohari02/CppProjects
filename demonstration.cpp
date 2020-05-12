#include<iostream>
using namespace std;
int main()
{
	int a[100],n;
	cin>>n;
	int *ptr;
	ptr=&a[0];
	for(int i=0;i<n;i++)
	{
		cin>>*(ptr+i);
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
