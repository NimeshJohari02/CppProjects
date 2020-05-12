#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2,s3;
	s1="aabab";
	s2="ab";
	int counter=0;
	for(int i=0;i<s1.length();i++)
	{
		int q=s1.find(s2);
		counter++;
		i=q;
	}
	cout<<counter;
}
