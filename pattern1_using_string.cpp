#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s1[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		s1[i][j]="*";	
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
	cout<<s1[i][j];	
		}
		cout<<endl;
	}	return 0;
}
