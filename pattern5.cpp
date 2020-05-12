#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n "<<endl;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		for (int j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=(2*i-1);k++)
		{
			if(k==1||k==(2*i-1))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}

		}
		cout<<endl;
	}
	for(int i=1;i<=2*n-1;i++)
	{
		if(i%2!=0)
		cout<<"*";
		else
		cout<<" ";
	}
	return 0;
}
