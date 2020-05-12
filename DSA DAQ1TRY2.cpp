#include<iostream>
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
		int item=a[top];
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
	cout<<"Enter the Number of coins"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>b[i];
	for(int r=1;r<=n-1;r++)
	{
		for(int i=0;i<n-1-r;i++)
		{
			if(b[i]>b[i+1])
			{
				int temp;
				temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;	
			}
		}
	}
	for (int i=n-1;i>=0;i--)
	{
		push(b[i]);
	}
	display();
	float exchange;
	cout<<"Enter The Exchange Value"<<endl;
	cin>>exchange;
	float sum=0,counter=0;
	for(int i=0;i<n;i++)
	{
		if(sum>=exchange)
		{
			counter=i;
			break;
		}
		else
		{
			sum=sum+pop();
		}
	}
	display();
	push(exchange);
	
	return 0;
}
