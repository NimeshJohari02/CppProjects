#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[60];
	cout<<"enter a string"<<endl;
	cin.getline(a,60);
		int n=strlen(a);
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[n-1-i])
		count++;
	}
	if(count==(strlen(a)))
	cout<<"panindrome"<<endl;
	else
	{
	
	cout<<"Chutiya mat bana"<<endl;
}
	return 0;
}
