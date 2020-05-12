#include<iostream>
#include<string.h>
int counter=0;
using namespace std;
struct node
{
	char data;
	struct node *next;
}*first=NULL;
void create(char a[],int n)
{
	struct node *temp,*last;
	first= new node;
	first->data=a[0];
	first->next=first;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->data=a[i];
		temp->next=last->next;  
		last->next=temp;
		last=temp;

	}
}
void display(struct node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		counter++;
		p=p->next;
		
	}
}
char remove(int pos)
{
	struct node *p=first,*q=NULL;
	if(pos!=1)
	{
		for(int i=0;i<pos-1&&p;i++)
		{
			q=p;
			p=p->next;
		}
		if(p)
		{
		
		q->next=p->next;
		char x=p->data;
		delete p;
		return x;
	}
	}
	else
	{
		struct node *h;
		do
		{
			h=h->next;
		}while(h->next!=first);
		first=p->next;
		h->next=first;
		char x=p->data;
		delete p;
		return x;
	}
}
int main()
{
	char a[100],n1[100],n2[100];
	strcpy(a,"FLAMES");
	create(a,strlen(a));
	cout<<"Enter Name 1  \n";
	cin>>n1;
	cout<<"Enter Name 2   \n";
	cin>>n2;
	int same=0;
	for(int i=0;i<strlen(n1);i++)
	{
		if(n1[i]!=n2[i])
		same++;
	}
	cout<<remove(same);
}  

