#include<iostream>
#include<string>
using namespace std;
string rev(string s1,int n)
{
	string s2;
	for(int i=0;i<n;i++)
	{
		s2[n-i-1]=s1[i];
	}
	return s2;
}
void strcopy(string s1,string &s2)
{
	for(int i=0;i<s1.length();i++)
	{
		s2[i]=s1[i];
	}
}
int main()
{
	string s1,*s2;
	int n=s1.length();
	cin>>s1;
	strcopy(s1,&s2);
	cout<<s2;
	return 0;
}
