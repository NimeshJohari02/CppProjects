#include<iostream>
using namespace std;
int getval(char ch)
{
	if(ch=='I')
	return 1;
	if(ch=='V')
	return 5;
	if(ch=='X')
	return 10;
	if(ch=='L')
	return 100;
	if(ch=='M')
	return 1000;
	if(ch=='C')
	return 100;
	if(ch=='D')
	return 500;
	return -1;
}

int main()
{
	string s;
	cin>>s;
	char last='B';
	int res=0;
	char greatest='I';
	for(int i=s.length()-1;i>=0;i--)
	{
		if(getval(s[i])>=getval(greatest))
		{
			res=res+getval(s[i]);
			greatest=s[i];
		}
		else
		{
			res=res-getval(s[i]);
		}	
	}
	cout<<res;
	
	return 0;
}

