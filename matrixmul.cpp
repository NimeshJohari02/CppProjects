#include<iostream>
using namespace std;
void input(int a[100][100],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
}
void display(int a[100][100],int r,int c)
{
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	
}
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int r1,c1,r2,c2;
	cout<<"r1="<<endl;
	cin>>r1;
	cout<<"r2=?"<<endl;
	cin>>r2;
	cout<<"c1=?"<<endl;
	cin>>c1;
	cout<<"c2=?"<<endl;
	cin>>c2;
	if(c1!=r2)
	cout<<"Multiplication not possible "<<endl;
	cout<<"Enter The Elements of matrix 1 "<<endl;
	input(a,r1,c1);
	cout<<"Enter the elements of the second array"<<endl;
	input(b,r2,c2);
	int pro[r1][c2];
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<c1;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
		
		display(c,r1,c2);
	return 0;
}
