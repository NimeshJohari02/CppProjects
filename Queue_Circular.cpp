#include<iostream>
#define max 5
int queue[max];
int front=-1;
int rear =-1;
using namespace std;
void enqueue()
{
	int n;
	cout<<"Enter Enqueue Element"<<endl;
	cin>>n;
	if(((max==rear+1)&&front==0)||front==rear+1)
	{
		cout<<"overflow"<<endl;
	}
	else if(front==-1&&rear==-1)
	{
		front=0;
		rear=0;
		queue[rear]=n;
	}
	else
	{
	rear++;
	queue[rear]=n;	
	}
	
	if(rear==max-1&&front!=0)
	{
		rear=0;
		queue[rear]=n;
		
	}
}
int dequeue()
{
	int val;
	if(front==-1||rear==-1)
	{
		cout<<"Underflow"<<endl;
		return -1;
	}
	else if(front==rear)
	{
		val=queue[front];
		front=-1;
		rear=-1;
		return val;
	}
	else if(front==max-1)
	{
		val=queue[front];
		front=0;
		return val;
	}
	else
	{
		val=queue[front];
		front++;
		return val;
	}
	
}
void display()
{
	if(front==-1||rear==-1)
	{
		cout<<"List if Empty"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i];
		}
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
