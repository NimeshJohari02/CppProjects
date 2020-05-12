#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	cout<<"ENter The no of strings ?"<<endl;
	int n;
	cin>>n;
	char a[100][100];
	for(int i=0;i<=n;i++)
	{
		cin.getline(a[i],100);
	}
	for(int i=0;i<=n;i++)
	{
		cout<<endl;
		cout.write(a[i],100);
	}
		for(int i=0;i<=n;i++)
	{
		for(int j=0;j<(strlen(a[i]))/2;j++)
		{
			int v=strlen(a[i]);
			char temp;
			temp=a[i][j];
			a[i][j]=a[i][v-1-j];
			a[i][v-1-j]=temp;
		}
	}
		for(int i=0;i<=n;i++)
	{
		cout<<endl;
		cout.write(a[i],100);
	}
	return 0;
}
