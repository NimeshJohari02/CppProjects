#include<iostream>
#include<stdlib.h>
using namespace std;
int a[100],size=100,top=-1;
void push(int i)

{

	if(top==size-1)
	{
	exit(0);	
	}
	else 
	{
		top++;
		a[top]=i;
	}
}
int pop()
{
	int item;
	if (top<1)
	exit(0);
	else
	{
		item=a[top--];
		return item;
	}
}
void display()
{
	
		for(int i=top;i>=0;i--)
		{
			cout<<a[i];
		}
		cout<<"\n";
	
}
int main()
{
	cout<<"Enter a number"<<endl;
	long int n;
	cin>>n;
	int a=n;
	while(n!=0)
	{
		int r=n%8;
		push(r);
		n=n/8;
	}
	display();
	return 0;
}



