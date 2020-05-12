#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
typedef struct book
{
	int bid;
	char bname[50];
}book;
int main()
{
	book b1;
	cin>>b1.bid;
	cin>>b1.bname;
	cout<<b1.bid<<endl;
	cout<<b1.bname;
	return 0;
}
