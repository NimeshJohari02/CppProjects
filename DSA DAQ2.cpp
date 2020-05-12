#include<iostream>
using namespace std;
int a[100],size=5,top1=-1,top2=5;
void push1()
{
	int e;
	cout<<"Enter The Element you Want To Push "<<endl;
	cin>>e;
	if(top1+1==top2||top1==size-1||top2==1)
	{
		cout<<"Stack Overflow \n ";
	}
	else 
	{
		top1++;
		a[top1]=e;
	}

}
void push2()
{
	int e;
	cout<<"Enter The Element you Want To Push "<<endl;
	cin>>e;
	if(top1+1==top2||top1==size-1||top2==0)
	{
		cout<<"Stack Overflow \n ";
		
	}
	else 
	{
		a[(top2-1)]=e;
		top2--;
	}
}
void pop1()
{
	int item;
	if (top1<0)
	cout<<"Stack Underflow"<<endl;
	else
	{
		item=a[top1--];
		cout<<item<<" was popped from the stack"<<endl;
	}
}
void pop2()
{
	int item;
	if (top2==5)
	cout<<"Stack Underflow"<<endl;
	else
	{
		item=a[top2];
		if(top2==size)
		{
			top2=0;
		}
		else
		{
			top2++;
		}
		cout<<item<<" was popped from the stack"<<endl;
	}
}
void display()
{
for(int i=0;i<size;i++)
cout<<a[i]<<" \t ";	
cout<<endl;
}
int main()
{

	int cs=0;
	cout<<"Enter Choice \n 1.Stack One  \n 2.Stack Two \n 3.Display \n 4.Exit"<<endl;
	cin>>cs;
	while(cs!=4)
	{
	
	if(cs==1)
	{ 
	int ch=0;
	cout<<"Enter Your Choice\n 1.Push \n 2.Pop \n 3.Exit"<<endl;
	cin>>ch;
	while(ch!=3)
	{
		if(ch==1)
		{
			push1();
		}
		else if(ch==2)
		{
			pop1();
		}
		cout<<"Enter Your Choice\n 1.Push \n 2.Pop \n 3.Exit"<<endl;
		cin>>ch;
	}
		
	}
	else if(cs==2)
	{
		int ch=0;
			cout<<"Enter Your Choice\n 1.Push \n 2.Pop \n 3.Exit"<<endl;
	cin>>ch;
	while(ch!=3)
	{
		if(ch==1)
		{
			push2();
		}
		else if(ch==2)
		{
			pop2();
		}
		cout<<"Enter Your Choice\n 1.Push \n 2.Pop \n 3.Exit"<<endl;
		cin>>ch;
	}
}
	else if(cs==3)
	{
		display();
	}
	cout<<"Enter Choice \n 1.Stack One  \n 2.Stack Two \n 3.Display\n 4.Exit"<<endl;
	cin>>cs;
	}
	return 0;
}



