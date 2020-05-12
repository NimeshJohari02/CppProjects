#include<iostream>
#include<string.h>
using namespace std;
struct comp
{
	char name[100];
	char ip[10];
}c[3];
int match(char *ptr1,char *ptr2)
{
	for(int i=0;i<7;i++)
	{
		if(*(ptr1+i)==*(ptr2+i))
		{
			i++;
		}
		else 
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	for(int i=0;i<3;i++)
	{
		cout<<"Name = "<<endl;
		cin>>c[i].name;
		cout<<"Ip Address ="<<endl;
		cin>>c[i].ip;
	}
	for(int i=0;i<=2;i++)
	{
		for(int j=i+1;j<=2;j++)
		{
			char *p1,*p2;
			p1=&c[i].ip[0];
			p2=&c[j].ip[0];
			int m=match(p1,p2);
			if(m==1)
			{
				cout<<c[i].name<<" And "<<c[j].name<<" are on same server  "<<endl;
			}
		}
	}
	return 0;
}
