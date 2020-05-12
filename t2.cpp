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
void new_begin(struct node *p)
{
	struct node *ptr,*save;
	ptr=new node;
	cout<<"Enter Element to Be Inserted"<<endl;
	cin>>(ptr->data);
	ptr->next=NULL;
	if(p==NULL)
	{
		first=ptr;
	}
	else
	{
		save=first;
		first=ptr;
		ptr->next=save;
	}
}
int main()
{
	int a[100],n;
	cout<<"Enter The size of the array"<<endl;
	cin>>n;
	cout<<"Elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	cout<<"LINK LIST HAS BEEN CREATED NOW DISPLAYING ......"<<endl;
	display(first);
	new_begin(first);
	display(first);
	return 0;
}
