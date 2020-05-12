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
void recdis(struct node *p)
{
	if(p!=NULL)
	{
		cout<<p->data<<endl;
		recdis(p->next);
	}
}
int main()
{
	int a[5]={69,669,699,6699,6969};
	create(a,5);
	recdis(first->next);
	return 0;
}
