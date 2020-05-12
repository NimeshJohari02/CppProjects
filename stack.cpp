#include<iostream>
using namespace std;
//global decl
int a[100],size,top=-1;
//void push(int a[],int top,int size)
void push()

{
	int e;
	cout<<"Enter The Element you Want To Push "<<endl;
	cin>>e;
	if(top==size-1)
	{
		cout<<"Stack Overflow \n ";
		
	}
	else 
	{
		top++;
		a[top]=e;
	}
}
//void pop(int a[],int top,int size)
void pop()
{
	int item;
	if (top<1)
	cout<<"Stack Underflow"<<endl;
	else
	{
		/*item=a[top];
		top--;*/
		item=a[top--];
		cout<<item<<" was popped from the stack"<<endl;
	}
}
//void display(int a[],int top)
void display()
{
	if(top<0)
	cout<<"Stack Is Empty"<<endl;
	else
	{
		for(int i=top;i>=0;i--)
		{
			cout<<a[i]<<"\t";
		}
		cout<<"\n";
	}
	
}
int main()
{
	//int a[100],size,top=-1; this should be global or the values must be passed by reference otherwise
	// the stack array will get destroyed as soon as the function goes out of scope
	cout<<"Enter the size of the stack "<<endl;
	cin>>size;
	int ch=0;
	cout<<"Enter Your Choice\n 1.Push \n 2.Pop \n 3.Display\n 4.Exit"<<endl;
	cin>>ch;
	while(ch!=4)
	{
		if(ch==1)
		{
			//push(a,top,size);
			push();
		}
		else if(ch==2)
		{
			//pop(a,top,size);
			pop();
		}
		else if(ch==3){
			//display(a,top);
			display();
		}
		cout<<"Enter Your Choice\n 1.Push \n 2.Pop \n 3.Display\n 4.Exit"<<endl;
		cin>>ch;

	}
	return 0;
}

/*
=========CHANGE LOG===========
Chagned the local variable of main() like a[], top, size to global for the funtion to access the values in real time
change the formal parameters of the member functions to correspond to the change made
=========Alternative Approach==========
passing the variables via reference using pointers
its gonna take some time.

*/

