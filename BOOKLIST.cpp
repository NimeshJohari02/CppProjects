#include<iostream>
#include<string.h>
#include<string>
using namespace std;

struct book
{
	
	char bname[100];
	int ascno;
	bool tagfield;//0 for issued 1 for free 
};

struct subs
{
	char name[100];
	int num,sid;
	char doi[100];
	int bookid[10];
};


class linkedbooks
{

struct node
{	
	struct book b1;
	struct node *next;
}*first=NULL;
public:
void create(struct book b[],int n)
{
	struct node *last,*temp;
	first=new node;
	first->b1.ascno=b[0].ascno;
	strcpy(first->b1.bname,b[0].bname);
	first->b1.tagfield=b[0].tagfield;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
		temp->b1.ascno=b[i].ascno;
		strcpy(temp->b1.bname,b[i].bname);
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
		cout<<"Name Of the Book\n"<<p->b1.bname<<endl;
		cout<<"Tag Field "<<p->b1.tagfield<<endl;
		p=p->next;
	}
	cout<<"\n\n";
}
void getdata()
{
	struct book b[100];
	int n;
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
}
void showlinkedlist()
{
display(first);
}
void insert(int pos,struct book x)
{
	 struct node *t,*p;
	if(pos==0)
	{
		t=new node;
		t->b1.ascno=x.ascno;
	strcpy(t->b1.bname,x.bname);
	t->b1.tagfield=x.tagfield;
		t->next=first;
		first=t;
	}
	else if(pos>0)
	{
		p=first;
		for(int i=0;i<pos-1&&p;i++)
		{
			p=p->next;
		}
		if(p)
		{
	t=new node;
	t->b1.ascno=x.ascno;
	strcpy(t->b1.bname,x.bname);
	t->b1.tagfield=x.tagfield;
		t->next=p->next;
		p->next=t;
		}
	}
}
book details(int search)
{
	struct node *p=first;
	while(p)
	{
		if(p->b1.ascno==search)
		{
			return p->b1;
		}
		p=p->next;
	}
}
void show_book(book a)
{
	cout<<"Ascession Number -----"<<a.ascno<<endl;
	cout<<"Name Of the Book\n"<<a.bname<<endl;
	cout<<"Tag Field "<<a.tagfield<<endl;
}
void issue(int val)
{
	struct node *p=first;
	while(p)
	{
		if(p->b1.ascno==val)
		{
			p->b1.tagfield=0;
		}
		p=p->next;
	}
}
int numberfrombook(char str[])
	{
		struct node *p=first;
		while(p)
		{
			if(strcmp(str,p->b1.bname)==0)
			{
				return p->b1.ascno;
			}
			p=p->next;
		}
	}	
};


class subscribers
{

struct node
{	
	struct subs s1;
	struct node *next;
}*first=NULL;
public:
void create(struct subs s[],int n)
{
	struct node *last,*temp;
	first=new node;
	first->s1.num=s[0].num;
	first->s1.sid=s[0].sid;
	strcpy(first->s1.name,s[0].name);
	strcpy(first->s1.doi,s[0].doi);
	for(int j=0;j<s[0].num;j++)
	{
		first->s1.bookid[j]=s[0].bookid[j];
	}
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=new node;
temp->s1.num=s[i].num;
	temp->s1.sid=s[i].sid;
	strcpy(temp->s1.name,s[i].name);
	strcpy(temp->s1.doi,s[i].doi);
	for(int j=0;j<s[i].num;j++)
	{
		temp->s1.bookid[j]=s[i].bookid[j];
	}
		temp->next=NULL;
		last->next=temp;
		last=temp;
	}
}
void display(struct node *p)
{
	while(p)
	{
		cout<<"\n=====================\nPRINTING DETAILS \n======================\n";
		cout<<"Name Of Subscribes"<<p->s1.name<<endl;
		cout<<"Subscriber Id\n"<<p->s1.sid<<endl;
		cout<<"Date Of Issue ="<<p->s1.doi<<endl;
		for(int i=0;i<p->s1.num;i++)
		{
			cout<<"books issued are "<<p->s1.bookid[i]<<endl;
		}
		p=p->next;
	}
	cout<<"\n\n";
}

void getdata()
{
	struct subs s[100];
	int n;
	cout<<"\n Enter The Number of Subscribers\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Details For "<<i+1<<" Subscriber \n";
		cout<<"Subscriber Name ";
		cin>>s[i].name;
		cout<<"Subscriber Id "<<endl;
		cin>>s[i].sid;
		cout<<"Enter Number Of Books Issued\n";
		cin>>s[i].num;
		for(int j=0;j<s[i].num;j++)
		{
			cout<<"Enter The Ascession number of the books issued\n\n";
			cin>>s[i].bookid[j];
		}
		cout<<"Date Of Issue\n";
		cin>>s[i].doi;
	}
	create(s,n);
}
void showlinkedlist()
{
display(first);
}


subs findbook(int value)
{
	struct node *p=first;
	while(p)
	{
		for(int j=0;j<p->s1.num;j++)
		{
			if(p->s1.bookid[j]==value)
			{
				return (p->s1);
			}
		}	
		p=p->next;
	}
}
subs find_subscriber(int val)
{
	struct node *p=first;
	while(p)
	{
		if(p->s1.sid==val)
		{
			return p->s1;
		}
		p=p->next;
	}
}

void showsub(subs x)
{
	cout<<"\n=====================\nPRINTING DETAILS \n======================\n";
		cout<<"Name Of Subscribes"<<x.name<<endl;
		cout<<"Subscriber Id\n"<<x.sid<<endl;
		cout<<"Date Of Issue ="<<x.doi<<endl;
		for(int i=0;i<x.num;i++)
		{
			cout<<"Codes of  Books issued are "<<x.bookid[i]<<endl;
		}
}
void forissue(int val,int x)
{
	struct node *p=first;
	while(p)
	{
		if(val==p->s1.sid)
		{
			p->s1.bookid[p->s1.num]=x;
			p->s1.num=p->s1.num+1;
		}
		p=p->next;
	}
}
};

int main()
{
linkedbooks o1;
o1.getdata();
cout<<"LINKED LIST FOR BOOKS CREATED NOW DISPLAYING \n=============================================================\n";
o1.showlinkedlist();
subscribers s1;
s1.getdata();

cout<<"LINKED LIST FOR SUBSCRIBERS CREATED NOW DISPLAYING \n=============================================================\n";
s1.showlinkedlist();
cout<<"\n\n==================MENU=====================\n\n";
cout<<"\n\nEnter Choice 1.Issue \n2.Return \n 3.Find The Book Owner \n 4.Given Title Find Owner \n5.Exit\n\n";
int ch;
cin>>ch;
int search;
while(ch!=5)
{
	char searchname[100];
	int issueid,subsid;
	switch(ch)
	{
		case 1:
			cout<<"\n Enter Assecion Number for the book you want to issue\n ";
			cin>>issueid;
			cout<<"\n Enter The Subscriber Id you want to Issue in The name of\n ";
			cin>>subsid;
			s1.forissue(subsid,issueid);
			s1.showlinkedlist();
			break;
			
		case 2:
			book x;
			cout<<"\n Enter Details For Returned book \n";
			cin>>x.bname;
			cout<<"\n Enter Assecsion Number \n";
			cin>>x.ascno;
			x.tagfield=0;
			cout<<"\n Enter Position You want to insert in \n \n";
			int pos;
			cin>>pos;
			o1.insert(pos,x);
			o1.showlinkedlist();	
			break;
			case 3:
				cout<<"\n Enter the Book Ascession Number for which you want to find owner\n ";
				cin>>search;
				o1.show_book(o1.details(search));
				s1.showsub(s1.findbook(search));
			case 4:
				cout<<"\n Enter The Name Of The Book You Want to find the owner for\n\n";
				cin>>searchname;
				s1.showsub(s1.findbook(o1.numberfrombook(searchname)));
				break;
	
				
	}
cout<<"\n\n ==================MENU=====================\n\n";
cout<<"Enter Choice 1.Issue \n2.Return \n 3.Find The Book Owner \n4.Given Title Find Owner \n5.Exitn\n";
cin>>ch;
}	
return 0;
}
