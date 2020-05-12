#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int ca,ha;
	char ch;
	cout<<"Enter The Student Type "<<endl;
	cin>>ch;
	ch=toupper(ch);
	switch(ch)
	{
		case 'A':
		ca=200;
		ha=0;
		break;
		case 'B'||'b':
			ha=200;
			ca=0;
	}
	cout<<"\nha=\n"<<endl<<ha;
	cout<<"\nca=\n"<<endl<<ca;
	return 0;
}
