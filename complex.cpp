#include<iostream>
using namespace std;
struct complex
{
	int r,c;	
	
}s1,s2,s3;
int main()
{
	cout<<"Enter real part of first complex number"<<endl;
	cin>>s1.r;

	cout<<"Enter real part of second complex number"<<endl;
	cin>>s2.r;
	cout<<"Enter complex part of first complex number"<<endl;
	cin>>s1.c;
	cout<<"Enter complex part of first complex number"<<endl;
	cin>>s2.c;
	cout<<"choice 1-add\n2-sub\n3-multiply"<<endl;
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			s3.r=s1.r+s2.r;
			s3.c=s1.c+s2.c;
			break;
			case 2:
			s3.r=s1.r-s2.r;
			s3.c=s1.c-s2.c;
			break;
			case 3:
			s3.r=(s1.r*s2.r)-(s2.c*s1.c);
			s3.c=(s1.r*s2.c)+(s1.c*s2.r);
			break;
	}
	cout<<"Final complex Number =  "<<s3.r<<"\t i "<<s3.c<<endl;
		return 0;
}
