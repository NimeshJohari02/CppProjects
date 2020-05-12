#include<iostream>
using namespace std;
char a[100]={};
char r[20];
int top=1;
int size =100;
void push(int item)
{
	if(top+1>=size)
	{
		cout<<"stack is full"<<endl;
		
	}
	else 
	{
		top++;
		a[top]=item;
	}
	
}
char pop()
{
	char k;
	if(top+1<1)
	{
		cout<<"Stack is empty";
	}
	else
	{
		k=a[top];
		top--;
		return k;
	}
}
void display()
{
	for(int i=0;i>=0;i--)
	{
	cout<<r[i];	
	}
}
int pre(char o)
{
	if(o=='-')
	return 1;
	else if(o=='+')
	return 1;
	else if(o=='*')
	return 2;
	else if(o=='/')
	return 2;
}
int main()
{
	char x[20]="2*3+4*5";
	char c[10];
	char n;
	int j=0;
	for(int i=7;i>=0;i--)
	{
		if(isdigit(x[i])!=0)
		{
			r[j]=x[i];
			j++;
		}
		else if(x[i]=='*'||x[i]=='-'||x[i]=='*'||x[i]=='/')
		{
			n=x[i];
			if(top==-1)
			{
				push(n);
			}
			else
			{
				if(pre(n)>pre(a[top]))
				{
					push(n);
				}
				else if(pre(n)<pre(a[top]))
				{
					for(int k=top;k>=0;k--)
					{
						r[j]=pop();
						j++;
					}
					push(n);
				}
			}
		}
	}
	for(int k=top;k>=0;k--)
	{
		r[j]=pop();
		j++;
	}
	display();
	return 0;
}
	

