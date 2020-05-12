#include<stdio.h>
#define max 5
int front=-1,rear=-1;
char buf[max];
char DVD[100];
int n=0;
int isempty()
{
	if(front==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(front==(rear+1)%max)
	return 1;
	else
	return 0;
}
int enqueue(char x)
{
	if(isfull())
	{
		printf("the buffer is full\n");
		return 0;
	}
	if(front==-1)
	{
		rear=0;
		front=0;
	}
	else
	{
		rear=(rear+1)%max;
	}
	buf[rear]=x;
	return 1;
}
char dequeue()
{
	char x;
	if(isempty())
	{
		printf("buffer is empty\n");
		return 0;
	}
	x=buf[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=(front+1)%max;
	}
	return x;
}
void display()
{

	int i=front;


	if(isempty())
	{
		printf("buffer is empty\n");

	}
	else
	{
	    while(i!=rear)
	    {
		printf("%c\n",buf[i]);
		i=(i+1)%max;
	}
		printf("%c\n",buf[i]);
	}
}
void display1()
{

	int k=0;
	for(k=0;k<n;k++)
	printf("%c\n",DVD[k]);
}
int main()
{
char s[100],a,c;
int ch=0,j=0,y=0,k=0;
printf("enter the expression\n");
gets(s);
while(ch!=5)
{
	printf("1-read the char and store it in buffer\n");
	printf("2-write into DVD\n");
	printf("3-display the current contents of buffer\n");
	printf("4-display the current contents of DVD\n");
	printf("5-exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			a=s[j];
			y=enqueue(a);
			if(y==1)
			j++;
			break;
		case 2:
			c=dequeue();
			DVD[n++]=c;
			a=s[j];
			y=enqueue(a);
			if(y==1)
			j++;
			break;
		case 3:
			display();
			break;
		case 4:
			display1();
			break;
		case 5:
			break;
	}
	}
}

