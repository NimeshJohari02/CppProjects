#include<iostream>
using namespace std;
void pattern(int a[5][5],int n)
{
	if(n>0)
	{
		for(int i=0;i<2*n-1;i++)
		{
			for(int j=0;j<2*n-1;j++)
			{
				if(i==0||j==0||i==n-1||j==n-1)
				{
					a[i][j]=n;
				}
				else
				{
					pattern[a[3][3],n-1];
				}
			}
		}
	}
}
int main()
{
	int a[5][5];
	pattern(a,3);
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
