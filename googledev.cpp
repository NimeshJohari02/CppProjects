#include<iostream>
#include<string.h>
using namespace std;
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
}
int ispallindrome(char a[100])
{
	int n=strlen(a);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			count=1;
		}
	}
	return count;
}
int main()
{
	char a[100];
	cout<<"Enter the string"<<endl;
	cin.getline(a,100);
	int n=strlen(a);
	int c=factorial(n);
	char perms[n][c];
	
	
	
}
