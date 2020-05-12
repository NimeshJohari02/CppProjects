#include<iostream>
#include<string>
#include<stdio.h>
#include<ctype.h>
#include<regex>
void printmatches(string s1,regex reg)
{
	smatch matches; 
	cout<<boolaplha;
	while(regex_search(str,matches,reg))
	{
		cout<<"match Exist"<<matches.ready()<<endl;
		cout<<"match not existExist"<<matches.empty()<<endl;
		cout<<"Number of matches"<<matches.size()<<endl;
		cout<<matches.str(1)<<endl;
		str=matches.suffix().str();
		cout<<endl;
	}
}
int main()
{
	string s1="I am the best there is";
	regex reg("(the[^ ])");	
	printmatches(str,reg);
	
}
