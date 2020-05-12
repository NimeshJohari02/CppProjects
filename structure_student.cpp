#include<iostream>
using namespace std;
struct student
{
	int rno;
	char name[20];
}s[20];
int main()
{
	for(int i=0;i<3;i++)
	{
	cout<<"ENter The name of the student"<<endl;
	cin>>s[i].name;
	cout<<"Enter The Roll Number"<<endl;
	cin>>s[i].rno;
}
for(int i=0;i<3;i++)
{
	cout<<s[i].rno<<endl<<s[i].name<<endl;
}
	return 0;
}
