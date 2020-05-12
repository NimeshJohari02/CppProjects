//concatenate 2 strings without using strcat
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[50],s2[50],s3[100];
	cout<<"s1"<<endl;
	cin.getline(s1,50);
	cout<<"s2"<<endl;;
	cin.getline(s2,50);
	for(int i=0;i<strlen(s1);i++)
	{
		s3[i]=s1[i];
	}
	int n=strlen(s1);
	for(int i=0;i<strlen(s2);i++)
	{
		s3[i+n]=s2[i];
		}	
		int c=strlen(s3);
		cout.write(s3,c);	
	return 0;
}
