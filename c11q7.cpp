#include<iostream>
using namespace std;
int a[100][100];
void display(int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<endl;}
}
void times2(int *a)
{
	*a=2*(*a);
}
int main()
{
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	display(r,c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			times2(&a[i][j]);
		}
	}
	cout<<"================================================\n";
	display(r,c);
	
}
