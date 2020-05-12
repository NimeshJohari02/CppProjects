//program for right angled triangle
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"n= ?"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<=(2*i-1);k++
		)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
	cout<<"\n\n\n\n\n\n";
		for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(int k=i;k<=(2*n-i);k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}


	return 0;
}
