#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char str[100],substr[100];
	cout<<"Enter the parent string "<<endl;
	cin.getline(str,100);
	int l1=strlen(str);
	int flag=0,pos;
	cout<<"Enter Pattern / Substring "<<endl;
	cin.getline(substr,100);
	int l2=strlen(substr);
	if(l2>l1)
	{
		cout<<"Error substring greater than the parent string"<<endl;
		exit(0);	
	}
	for(int a=0;a<l1;a++)
	{
		for(int i=a;i<(l1-a);i++)
		{
			if(str[i]==substr[0])
			{
				pos=i;
				int j=0;
				while(str[i]==substr[j])
				{
					i++;
					j++;
					
				}
				if(j>=l2)
				{
					flag=1;
				}
			}
		}	
	}	
	if(flag)
	{
		cout<<"SUb String present at "<<pos+1;
	}	
	else
	{
		cout<<"Substring not there "<<endl;
	}
	return 0;
}
