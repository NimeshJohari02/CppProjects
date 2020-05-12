#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char  word[80],str[80];
	int k=0;
	cout<<"Enter a string"<<endl;
	cin.getline(str,80);
	strcat(str," ");
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			word[k]=str[i];
			k++;
		}
		else
		{
			while(k>0)
			cout<<word[--k];
			cout<<str[i];
		}
	}
	return 0;
}
