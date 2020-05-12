#include<iostream>
using namespace std;
#define null '\0'
#include<string.h>
struct node
{
	string regno;
	float cgpa;
	string name;
	node *prev;
	node *next;
};
node *top=null;
void enter_details(string rno,float gpa,string nam)
{
	node *newnode=new node;
	newnode->regno=rno;
	newnode->cgpa=gpa;
	newnode->name=nam;
	newnode->next=null;
	newnode->prev=null;
	if(top==null)
	 top=newnode;
	else
	{
		newnode->next=top;
		top->prev=newnode;
		top=newnode;
	}
}
void display_details()
{
	node *temp=top;
	while(temp!=null)
	{
		cout<<"the display regno "<<temp->regno<<"\n";
		temp=temp->next;
	}
}
void regno_search()
{
	string n;
	cout<<"enter the node u want to search"<<"\n";
	cin>>n;
	node *temp=top;
	while(temp->regno!=n&&temp->next!=null)
	{
		temp=temp->next;
	}
	if(temp->regno!=n)
	 cout<<"regno is not valid"<<"\n";
	else
	{
	if(temp==top)
	{
		if(temp->next!=null)
		{
		 cout<<"regno of searched node is "<<temp->regno<<"\n";
		 cout<<"predecessor of a this searched node is "<<"\n"<<temp->next->regno<<"\n"<<temp->next->cgpa<<"\n"<<temp->next->name<<"\n";
		 cout<<"no successor of this node"<<"\n";
		 cout<<"want to delete this searched node"<<"\n"<<"y/n"<<"\n";
		 char m[2];
		 cin>>m;
		 char a[2]="y";
		 if(!strcmp(m,a))
		 {
		  top=temp->next;
		  delete temp;
		  cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	      char c[2];
	      cin>>c;
	      char b[2]="y";
	     if(!strcmp(c,b))
	     {
		 	temp=top;
	      	while(temp->next!=null)
	      	{
	      	 temp=temp->next;
	      }
	      	temp->next=top;
	      	top->prev=temp;
		    
	     }
	    }
	     else if(strcmp(m,a))
	     {
	     cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	     char c[2];
	     cin>>c;
	     char b[2]="y";
	     if(!strcmp(c,b))
	      {
	      	while(temp->next!=null)
	      	{
	      	 temp=temp->next;
	        }
	        temp->next=top;
	      	top->prev=temp;
		  } 
     	  }
          }
     	else
     	{
     	 cout<<"regno of searched node is "<<temp->regno<<"\n";
     	 cout<<"this node doesn't have any succesor and predecessor"<<"\n";
     	 cout<<"want to delete this searched node"<<"\n"<<"y/n"<<"\n";
		 char m[2];
		 cin>>m;
		 char a[2]="y";
		 if(!strcmp(m,a))
		 {
     	  delete temp;
     	  cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	     char c[2];
	     cin>>c;
	     char b[2]="y";
	     if(!strcmp(c,b))
	     {
	     	temp=top;
	     	top->next=top;
	     	top->prev-top;
		 }
	    }
	    else if(strcmp(m,a))
	    {
	    cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	     char c[2];
	     cin>>c;
	     char b[2]="y";
	     if(!strcmp(c,b))
	     {
	     	temp->next=top;
	     	temp->prev=top;
		 }//end of if
	     }//end of else if
	     }//end of else
     	  
    }//end of if
	else if((temp->next==null)&&(top->next!=null))
	{
		cout<<"regno of searched node is "<<temp->regno<<"\n";
		cout<<"successsor of a this searched node is "<<"\n"<<temp->prev->regno<<"\n"<<temp->prev->cgpa<<"\n"<<temp->prev->name<<"\n";
		cout<<"no predecessor of this node"<<"\n";
		cout<<"wants to delete this searched node"<<"\n"<<"y/n"<<"\n";
		char m[2];
		cin>>m;
		char a[2]="y";
		if(!strcmp(m,a))
		{
			temp->prev->next=null;
	     	delete temp;
	     	cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	       char c[2];
	       cin>>c;
	      char b[2]="y";
	      if(!strcmp(c,b))
	      {
	      	 temp=top;
	      	while(temp->next!=null)
	      	{
	      	 temp=temp->next;
	        }
	      	 temp->next=top;
	      	 top->prev=temp;
		  }
	    }
	    else if(strcmp(m,a))
	    {
	     cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	       char c[2];
	       cin>>c;
	      char b[2]="y";
	      if(!strcmp(c,b))
	      {
	      	temp->next=top;
	      	top->prev=temp;
		  }
		}
	}
	else
	{
	cout<<"regno of searched node is "<<temp->regno<<"\n";
	cout<<"successsor of a this searched node is "<<"\n"<<temp->prev->regno<<"\n"<<temp->prev->cgpa<<"\n"<<temp->prev->name<<"\n";
	cout<<"predecessor of a this searched node is "<<"\n"<<temp->next->regno<<"\n"<<temp->next->cgpa<<"\n"<<temp->next->name<<"\n";
	cout<<"want to delete this searched node"<<"\n"<<"y/n"<<"\n";
		char m[2];
		cin>>m;
		char a[2]="y";
		if(!strcmp(m,a))
		{
	     temp->next->prev=temp->prev;
	     temp->prev->next=temp->next;
	     delete temp;
	     cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	       char c[2];
	       cin>>c;
	      char b[2]="y";
	      if(!strcmp(c,b))
	      {
	      	temp=top;
	      	while(temp->next!=null)
	      	 temp=temp->next;
	      	 temp->next=top;
	      	 top->prev=temp;
		  }
        }
        else if(strcmp(m,a))
        {
         cout<<"want to make doubly list as circular list"<<"\n"<<"y/n"<<"\n";
	       char c[2];
	       cin>>c;
	      char b[2]="y";
	      if(!strcmp(c,b))
	      {
	      	node *temp1=top;
	      	while(temp1->next!=null)
	      	 temp1=temp1->next;
	      	 temp1->next=top;
	      	 top->prev=temp1;
		  }
	    } 
   }
}
}

string remove(int pos,string *pichla,string *agla)
{
	struct node *p=top,*q=NULL;
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
		p->next->prev=q;
		string x=p->name;
		*agla=p->next->name;
		*pichla=q->name;
		delete p;
		return x;
	}
	}
	else
	{
		top=p->next;
		string x=p->name;
		*agla=p->next->name;
		delete p;
		*pichla="SINCE 1stNODE no prev";
		return x;
	}
}
main()
{
	int choice;
	string rno;
	float gpa;
	string nam;
	do
	{
		cout<<"enter the choice"<<"\n";
		cout<<"1.enter_details"<<"\n"<<"2.display_details"<<"\n"<<"3.regno_search \n 4. Delete Pos"<<"\n";
		cin>>choice;
		int pos;
		string agla,pichla;
		switch(choice)
		{
			case 1:
				    cout<<"roll no. ";
				    cin>>rno;
				    	cout<<"\n";
                	cout<<"cgpa ";
                    cin>>gpa;
                    	cout<<"\n";
                 	cout<<"name ";
                    cin>>nam;
                    cout<<"\n";
				    enter_details(rno,gpa,nam);
				    break;
			case 2:
				    display_details();
				    break;
			case 3:
				   regno_search();
				   break;
			case 4:
				cout<<"Enter The Number/INDex of Deleted Node   \n";
				cin>>pos;
				string r=remove(pos,&pichla,&agla);
				cout<<"    NEXT   "<<agla<<endl<<" \n\n PREVIOUS  "<<pichla<<"      ";
				break;
		}
	}while(choice<=4);
}
