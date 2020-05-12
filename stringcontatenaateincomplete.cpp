#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str1[50],str2[50];
cout<<"Enter the string 1"<<endl;
cin.getline(str1,50);
cout<<"Enter the second string\n";
cin.getline(str2,50);
int l1=strlen(str1);
int l2=strlen(str2);
if(l1>l2)
{
	strcpy(str1,str2);
	cout.write(str1,l1);
}
else
{
	strcpy(str2,str1);
	cout.write(str2,l2);
}
}
