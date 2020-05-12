#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	int n;
	cout<<"Enter The Number Of Elements \n";
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	cin>>a[i];
	vector <int>v[10];
	for(int i=0;i<n;i++)
	{
		int q=a[i]%10;
		v[q].push_back(a[i]);
	}
	int cap=0;
	for(int j=0;j<10;j++)
	{
		while(!v[j].empty())
		{
			int c=v[j].front();
			a[cap++]=c;
			v[j].pop_back();
		}
	}
	cout<<"\n\n 1  pass\n\n\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"     ";
	
	for(int i=0;i<n;i++)
	{
		int q=(a[i]/10)%10;
		v[q].push_back(a[i]);
	}
	int capa=0;
	for(int j=0;j<10;j++)
	{
		while(!v[j].empty())
		{
			int c=v[j].front();
			a[capa++]=c;
			v[j].pop_back();
		}
	}
	
	
	
	cout<<"\n\n 2  pass\n\n\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"     ";
}
