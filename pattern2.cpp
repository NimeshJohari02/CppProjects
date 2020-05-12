#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"num ="<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	return 0;
}
