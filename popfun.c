#include<stdio.h>
void push(int a[100], int top, int size)
{
	if (top==size-1)
	printf("STACK OVERLFOW");
	else
	{
		int num;
		printf("Enter the item to be pushed");
		scanf("%d",&num);
		top=top+1;
		a[top]=num;
	}
}
void pop(int a[100],int top)
{
	if(top<=0)
	{
		printf("STACK UNDERLOW");
	}
	else
	{
		printf("ELlemt popped is %d",a[top]);
		top--;
	}
}
void main()
{ 
		int a[200],size,top=0;
		int ch=0;
		printf("PLEASE ENTER THE SIZE");
		scanf("%d",&size);
	while(ch!=3)
	{
		printf("\n =======================================================================\n");
		printf("\nSTACK OPERATIONS\n");
		printf("\n1.PUSH \n 2.POP \n 3.EXIT \n");
		printf("\nEnter Your Choice");
		scanf("%d",&ch);
}
	switch(ch)
		{
			case 1:
				push(a,top,size);
				break;
			case 2:
				pop(a,top);
				break;
			case 3:
				break;
			default:
				printf("PLEASE ENTER VALID INPUT");		
				break;	
		}		
	}
