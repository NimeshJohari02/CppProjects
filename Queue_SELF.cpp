#include<iostream>
using namespace std;
int a[10];
int front =-1;
int rear=-1;
void enqueue()
{
	int e;
	cout<<"Enter The Element You Want to Enqueue"<<endl;
	cin>>e;
	if(rear>9)
	{
		cout<<"Queue Is Full"<<endl;
	}
	if(front==-1)
	{
		front=0;
	}
		rear++;
		a[rear]=e;	
}
int dequeue()
{
	int val;
	if(front==-1||front>rear)
	{
		cout<<"Queue is Empty"<<endl;
		return -1;
	}
	else
	{
		val=a[front];
		front++;
		return val;
	}
	
}
void display()
{
	if(front==-1||front>rear)
	{
		cout<<"List if Empty"<<endl;
	}
	else
	{
		cout<<"\n\nDISPLAYLING\n\n";
	for(int i=front;i<=rear;i++)
	cout<<a[i]<<"\n";
}
}
int main()
{
	int ch;
	cout<<"Enter Your Choice \n 1.Enqueue\n 2.Dequeue \n 3.Display \n 4.Exit \n "<<endl;;
	cin>>ch;
	int val;
	do
	{
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				val=dequeue();
				cout<<"Value Returned is "<<val<<endl;
				break;
			case 3:
			display();
			break;			
		}
		
	cout<<"Enter Your Choice \n 1.Enqueue\n 2.Dequeue \n 3.Display \n 4.Exit \n "<<endl;;
	cin>>ch;
	}while(ch!=4);
	return 0;
}
