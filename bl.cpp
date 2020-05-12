#include<iostream>
#include<string.h>
#include<string>
using namespace std;
struct book
{
	string bname;
	int ascno;
	bool tagfield;//0for issued 1 for free
};
struct node
{	
	struct book b1;
	struct node *next;
}*first=NULL;
void create(struct book b[],int n)
{
	struct node *last,*temp;
	first=new node;
	first->b1.ascno=b[0].ascno;
	first->b1.bname=b[0].bname;
	first->b1.tagfield=b[0].tagfield;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->b1.ascno=b[i].ascno;
		temp->b1.bname=b[i].bname;
		temp->b1.tagfield=b[i].tagfield;
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
void display(struct node *p)
{
	while(p)
	{
		cout<<"Ascession Number -----"<<p->b1.ascno<<endl;
		cout<<"Name Of the Book"<<p->b1.bname;
		cout<<"\n Tag Field "<<p->b1.tagfield<<endl;
		p=p->next;
	}
	cout<<"\n\n";
}
int main()
{
	int n;
	struct book b[100];
	cout<<"Enter The Number of Books\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Details For "<<i+1<<" book \n";
		cin>>b[i].bname;
		cout<<"Enter Assecsion Number \n";
		cin>>b[i].ascno;
		cout<<"If issued Press 0 Else 1\n";
		cin>>b[i].tagfield;
	}
	create(b,n);
	display(first);
	return 0;
}
