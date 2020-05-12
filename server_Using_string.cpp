#include<iostream>
using namespace std;
#include<string>
typedef struct server
{
	string name;
	string ip;
}server;
void same_server(string s1,string s2)
{
int i1=s1.find(".");
cout<<i1;
}

int main()
{
	server b[3];
	cout<<"Enter The Details of the Machine";
	for(int i=0;i<3;i++)
	{
		cin>>b[i].name;
		cin>>b[i].ip;
	}
/*	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			int c=same_server(b[i].ip,b[j].ip);
			if(c)
			{
				cout<<b[i].name<<" And "<<b[j].name<<" are on same server "<<endl;
			}
		}
	}*/
	same_server(b[1].ip,b[2].ip);
}

