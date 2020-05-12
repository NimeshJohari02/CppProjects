#include<iostream>
using namespace std;
void linser(int a[],int n,int s,int *p)
{for(int i=0;i<n;i++)
{

	if(a[i]==s)
	{
		*p=i;
	}

}
}
int main()
{
	int a[100],n,s;
	cout<<"Size= "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Search";
	cin>>s;
	int i=-1;
	linser(a,n,s,&i);
	if(i<0)
	{
		cout<<"not found";
	}
	else
	{
		cout<<"Elemet found at index ="<<i+1;
	}
	
}
