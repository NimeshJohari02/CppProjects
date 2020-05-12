#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	cout<<"ENter a string"<<endl;
	cin.getline(a,100);
	for(int i=0;a[i]!='\0';i++)
	{
		if(isupper(a[i]))
		{
			cout<<a[i];
		}
		else
		{
			a[i]=toupper(a[i]);
			cout<<a[i];
		}
	}
	return 0;
}
