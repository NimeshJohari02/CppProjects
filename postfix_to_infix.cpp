#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
int a[100]; 
int top=-1;
void push(float i)
{	
	top++;
	a[top]=i;
}
int pop()
{
		int item=a[top];
		top--;
		return item;
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<endl;
}
int main()
{
char str[50];
float result=0;
cout<<"Enter Postfix Expression"<<endl;
cin>>str;
for(int i=0;i<strlen(str);i++)
{
	if(isdigit(str[i]))
	{
		push((str[i]-48));	//convert std number to infix number isleye kiya hai ...
	}
	else
	{
		int op2=pop();
		int op1=pop();
		if(str[i]=='+')
		{
			int result=op1+op2;
			push(result);
		}
		else if(str[i]=='-')
		{
			result=op1-op2;
			push(result);

		}
		else if(str[i]=='*')
		{
			result=op1*op2;
			push(result);
		}
		else if(str[i]=='/')
		{
			result=(float)op1/op2;
			push(result);
		}
		
	}
}
int final=pop();
cout<<"\n final result is \n "<<final;
return 0;	
}
