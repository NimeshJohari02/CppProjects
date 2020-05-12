#include<iostream>
using namespace std;
class stack
{
	int a[100];
	int top=-1;
	int size;
	public:
	void push()
	{
		int e;
		cin>>e;
		if(top>size-1)
		{
			cout<<"Stack OverFlow\n\n";
		}
		else
		{
			top++;
			a[top]=e;
		}
	}
	int pop()
	{
		if(top==-1)
		{
			cout<<"Stack Underflow \n";
			return INT32_MIN;
		}
		else
		{
			return(a[top--]);
		}
	}
	void getdata()
	{
		cout<<"Enter Size";
		cin>>size;
	}
	void showdata()
	{
		for(int i=0;i<=top;i++)
		{
			cout<<a[i]<<"   ";
		}
		cout<<endl;
	}
	int getsize()
	{
		return size;
	}
};
int main()
{
	stack s1;
	int ch;
	s1.getdata();
	cout<<"\n Enter 1 to push\n 2.POP \n 3.display\n4.exit"<<endl;
	cin>>ch;
	while(ch!=4)
{
	switch(ch)
	{
		case 1:
			s1.push();
			break;
		case 2:
		cout<<s1.pop()<<endl;
		break;	
		case 3:
		s1.showdata();
		break;	
	}
	cout<<"Enter 1 to push\n 2.POP \n 3.display\n4.exit"<<endl;
	cin>>ch;
}
}
