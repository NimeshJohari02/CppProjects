#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(a[j]>=a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
/*	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubble(a,n);
	cout<<"+++++++++++++++++++++++++++++++++++++++"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}*/
int n=3;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
bubble(a,n);
int m1=a[0]-a[1]*a[2];
int m2=a[0]-(a[1]+a[2]);
(m1>m2?cout<<m2:cout<<m1);
}
