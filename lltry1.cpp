#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *next;
}*first=NULL;

void create(int a[],int n)
{
	struct node *last,*temp;
	first=new node;
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
void display(struct node *ptr)
{
	while(ptr!=NULL)
	{
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	create(a,n);
	cout<<"display"<<endl;
	display(first);
	
	return 0;
}
