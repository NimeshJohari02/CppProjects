#include<iostream>
#include<stdlib.h>
using namespace std;
float a[100];
int size=100,top=-1;
void push(float i)
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
float pop()
{
if(top==-1)
{
exit(0);
}
else
{
float item=a[top];
top--;
return item;
}
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
int n;
float b[100];
cout<<"Enter The Number Of coins"<<endl;
cin>>n;
cout<<"Enter The Coins in sorted order largest first"<<endl;
for(int i=0;i<n;i++)
{
cin>>b[i];
push(b[i]);
}
//Coin To The Stack Push process Done
cout<<"Enter The coin you want to add To the stack"<<endl;
float dem,disc[50];
cin>>dem;
int k=0;
while(dem>a[top])
{	
	disc[k]=pop();
	k++;
}
push(dem);
for(int i=k-1;i>=0;i--)
{
	push(disc[i]);
}
display();
//Exchange begins...
cout<<"Enter The value you want to exchange from the stack(Make sure that the stack has enough coins of lower denominations)"<<endl;
float exchange;
cin>>exchange;
int sum=0;
while(exchange>sum)
{
sum=sum+pop();
}
int l=0;
while(exchange>a[top])
{	
	disc[l]=pop();
	l++;
}
push(exchange);
for(int i=l-1;i>=0;i--)
{
	push(disc[i]);
}
display();
return 0;
}
