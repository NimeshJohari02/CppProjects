#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector <int>v;
	for(int i=0;i<n-1;i++)
	{
		int d=a[i+1]-a[i];
		v.push_back(d);
	}
	v.push_back(0);
	vector<int>ss;
	sort(v.begin(),v.end());
	int z;
	cin>>z;
	vector <int>::iterator i1=v.begin();
	vector <int>::iterator i3;
	for(i3=v.begin();i3!=v.end();i3++)
	{
		int e=(*i3)^z;
		ss.push_back(e);
	}
	sort(ss.begin(),ss.end());
	cout<<ss[ss.size()-1];
}
	return 0;
}
