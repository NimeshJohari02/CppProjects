#include<iostream>
using namespace std;
int main()
{
	cout<<"N=?"<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
		cout<<" ";
		
		}
		for(int k=1;k<=(2*i-1);k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
	return 0;
}
