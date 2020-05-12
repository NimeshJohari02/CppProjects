#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char a[100];
	int count=0;
	cin.getline(a,100);
	int n= strlen(a);
	for(int i=0;i<n;i++)
	{
		if((a[i]=='a')||(a[i]=='A')||(a[i]=='e')||(a[i]=='E')||(a[i]=='I')||(a[i]=='i')||(a[i]=='O')||(a[i]=='o')||(a[i]=='u')||(a[i]=='U'))
		count++;
	}
	cout<<count;
	return 0;
}
