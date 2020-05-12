#include<iostream>
#define max 5
using namespace std;
int front=1;
int rear=-1;
int queue[5];
void insert()
{
	int num;
	cout<<"Enter the number to be inserted into the queue"<<endl;
	cin>>num;
	if(rear==max-1)
	{
		cout<<"Overflow"<<endl;
		
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
	}
	else
	{
		rear++;
	}
	queue[rear]=num;
}
int remove()
{
	if(front==-1||front>rear)
	{
		cout<<"Queue Empty"<<endl;
		return -1;
	}
	else
	{
		int val=queue[front];
		front++;
		if(front>rear)
		{
			front=rear=-1;
			
		}
		return val;
	}
}
int peek()
{
	if(front==-1||front>rear)
	{
		cout<<"Queue is empty"<<endl;
		return -1;
	}
	else
	{
		return queue[front];
	}
}
void display()
{
	cout<<endl;
	if(front==-1||front>rear)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		cout<<queue[i]<<endl;
	}
}
int main()
{
	int ch;
	cout<<"\n1.Inserting\n 2. Deleting \n 3.Peek \n 4.Display \n 5.Exit"<<endl;
	cin>>ch;
	int val;
	do
	{
		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				val=remove();
				if(val!=-1)
				cout<<"Element Deleted"<<endl;
				break;
			case 3:
				val= peek();
				cout<<val<<endl;
				break;
			case 4:
			display();
			break;		
		}
	cout<<"\n1.Inserting\n 2. Deleting \n 3.Peek \n 4.Display \n 5.Exit"<<endl;	
	cin>>ch;	
	}while(ch!=5);
	return 0;
}
