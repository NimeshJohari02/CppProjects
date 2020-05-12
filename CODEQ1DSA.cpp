	int num;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	cout<<"Enter the no. of elemnts you want to push into the stack ?"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		push(1);
	}
	display();
	cout<<endl;
	for(int i=1;i<=num+1;i++)
	{
		pop();
		display();
	}
		
	#include<iostream>
using namespace std;
float a[100]; 
int size,top=-1;
void push(float i)
{
	if(top==size-1)
	{
		cout<<"stack overflow"<<endl;
	}
	else
	{
	
	top++;
	a[top]=i;
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"stack underflow"<<endl;
	}
	else
	{
		int item=a[top];
		top--;
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
	int p,r1,r2,r5,r10;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	cout<<"Number of 10 rupee =? "<<endl;
	cin>>r10;
	for(int i=1;i<=r10;i++)
	{
		push(10);
	}
	
	cout<<"Number of 5 Rupee Coins=? "<<endl;
	cin>>r5;
	for(int i=1;i<=r5;i++)
	{
		push(5);
	}
		
	cout<<"Number of 2 Rupee Coins=? "<<endl;
	cin>>r2;
	for(int i=1;i<=r2;i++)
	{
		push(2);
	}
	
	cout<<"Number of 1 Rupee Coins=? "<<endl;
	cin>>r1;
	for(int i=1;i<=r1;i++)
	{
		push(1);
	}
	
	cout<<"Number of 50 paise=? "<<endl;
	cin>>p;
	for(int i=1;i<=p;i++)
	{
		push(.5);
	}
	float de,trade;
	cout<<"Enter The coin demonination for exchange"<<endl;
	cin>>de;
	if(de==0.5)
	{
		cout<<"no use"<<endl;
	}
	else
	{
		cout<<"ENter the denomination you want to exchange for(Must be lower than"<<de<<" )"<<endl;
		cin>>trade;
		if(de==1)
		{
			int num;
			cout<<"Enter The number of 1 rupee coins you want to exchange for .5 coins "<<endl;
			cin>>num;
			if(p>=(num*2))
			{
				int rem=p-num*2;
				for(int i=1;i<=p;i++)
				{
					pop();
				}
				for(int i=1;i<=num;i++)
				{
					push(1);
				}
				for(int i=1;i<=rem;i++)
				{
					push(.5);
				}
			}
			else
			{
				cout<<"insufficient coins of lower denominations"<<endl;
			}
		}
		if(de==2)
		{
		cout<<"ENter the denomination you want to exchange for(Must be lower than \t "<<de<<" )"<<endl;
		cin>>trade;
		if(de==1)
		{
			int num;
			cout<<"Enter The number of 1 rupee coins you want to exchange for .5 coins "<<endl;
			cin>>num;
			if(p>=(num*2))
			{
				int rem=p-num*2;
				for(int i=1;i<=p;i++)
				{
					pop();
				}
				for(int i=1;i<=num;i++)
				{
					push(1);
				}
				for(int i=1;i<=rem;i++)
				{
					push(.5);
				}
			}
			else
			{
				cout<<"insufficient coins of lower denominations"<<endl;
			}

			
			
		}
		
	}
display();
return 0;	
}
