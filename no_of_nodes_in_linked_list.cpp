#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*first=NULL;
void create(int a[],int n)
{
	struct node *temp,*last;
	first= new node;
	first->data=a[0];
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=a[i];
		temp->next=NULL;  
		last->next=temp;
		last=temp;
	}
}
void display(struct node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
		
	}
}
int number(struct node *p)
{
	int counter=0;
	while(p!=NULL)
	{
		counter++;
		p=p->next;
	}
return counter;
}
int main()
{
	int A[]={3,5,7,10,15};
	create(A,5);
	display(first);
	int c=number(first);
	cout<<"Number of Elements of the link list are  "<<c<<endl;
	
}  

