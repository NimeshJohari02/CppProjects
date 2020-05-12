#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			s[i][j]="*";
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<s[i][j];
		}
		cout<<endl;
	}
	return 0;
}
