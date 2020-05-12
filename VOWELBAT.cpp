#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<algorithm>
int main()
{
	int n;
	cin>>n;
	vector<string> v;
	for(int i=0;i<n;i++)
	{
		string q;
		cin>>q;
		v.push_back(q);
	}
	vector<string>::iterator i1=v.begin();
	vector<string>::iterator i2=v.end();
	for(int i=i1;i<i2;i++)
	cout<<v.at(i)<<endl;
	
	return 0;
}
