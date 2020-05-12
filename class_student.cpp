#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
	int rno,m;
	char name[25],grade;
	public:
		void readstudent()
		{
			cout<<"Enter Roll Number";
			cin>>rno;
			cout<<"Enter Name";
			cin>>name;
			cout<<"Enter Marks";
			cin>>m;			
		}
		void display()
		{
			calcgrade();
			cout<<"Roll No- "<<rno<<endl;
			cout<<"Name"<<name<<endl;
			cout<<"Marks"<<m<<endl;
			cout<<"Grade"<<grade<<endl;
		}
		int getrollno()
		{
			return rno;
		}
		int getmarks()
		{
			return m;
		}
		void calcgrade()
		{
			if(m>=75)
			{
				grade='S';
			}
			else if(m>=65&&m<75)
			{
			grade='A';
			}else if(m>=55&&m<65)
			{
			grade='B';
		}
			else
			{
			
			grade='C';
		}
		}
};
int main()
{
	student s[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter The Student Detail";
		s[i].readstudent();
	}
	int choice,rno,pos=-1,highmarks=0;
	
		cout<<"Enter 1.Specific Student \n 2.Topper \n 3. Exit \n";
		cin>>choice;
	do
	{
		switch(choice)
		{
			case 1:
				cout<<"Enter The Roll-No. You want the details for"<<endl;
				cin>>rno;
				for(int i=0;i<5;i++)
				{
					if(rno==s[i].getrollno())
					{
						s[i].display();
						break;
					}
					if(i==4)
					cout<<"Invalid Roll-Number Sorry"<<endl;
				}
				break;
			case 2:
				for(int i=0;i<5;i++)
				{
					if(s[i].getmarks()>highmarks)
					{
						highmarks=s[i].getmarks();
						pos=i;
					}
				}
				s[pos].display();
				break;
			case 3: break;
			default:
			cout<<"Invalid Input"<<endl;	
		}
		cout<<"Enter 1.Specific Student \n 2.Topper \n 3. Exit \n";
		cin>>choice;
	}while(choice!=3);
	return 0;
}
