#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[60];
	cout<<"Enter the string ";
	cin.getline(a,60);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]=='-')
		a[i]=' ';
	}
	cout.write(a,n);
	return 0;
}
