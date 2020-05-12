#include<iostream>
int counter=0;
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
void search(struct node *p)
{
	int search;
	cout<<"Enter Search Element";
	cin>>search;
	int *temp;
	temp=NULL;
	while(p!=NULL)
	{
		if(p->data==search)
		{
			temp=&(p->data);
			break;
		}
		p=p->next;
	}
	if(temp!=NULL)
	{
		cout<<"Element found"<<endl;
		
	}
	else
	{
		cout<<"not found";
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

int sum(struct node *p)
{
	int s=0;
	while(p)
	{
		s=s+p->data;
		p=p->next;
	}
	return s;
}

int max(struct node *p)
{
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
	cout<<"Number of Elements of the link list are"<<counter<<endl;
	cout<<"Sum Of Elements of The linked list are "<<(sum(first))<<endl;
	cout<<"Now For Finding the Search  ELement of The Linked list"<<endl;
	search(first);
	
}  

