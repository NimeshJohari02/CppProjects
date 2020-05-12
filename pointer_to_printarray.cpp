#include<iostream>
using namespace std;
int main()
{
	int a[100];
	cout<<"Enter the size ";
	int n;
	cin>>n;
	int *p;
	for(int i=0;i<n;i++)
	cin>>a[i];
	p=a;
	for(int i=0;i<n;i++)
	{
		cout<<*(p+i);
	}
	return 0;
}
