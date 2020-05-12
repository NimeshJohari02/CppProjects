#include<stdio.h>
void main()
{
	int data[5],top,temp=0;
	int ch=0;
	while(ch!=3)
	{
		printf("\n =======================================================================\n");
		printf("STACK OPERATIONS");
		printf("1.PUSH \n 2.POP \n 3.EXIT \n");
		printf("Enter Your Choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if (top==4)
				{
				printf("STACK IS FULL");
			 }
			 else
				{
					top=top+1;
					printf("ENTER THE ELEMENT YOU WANT TO PUSH");
					scanf("%d",&temp);
					data[top]=temp;
				}
				break;
			case 2:
			if(top==-1)
			printf("STACK IS EMPTY");
			else
			{
				printf("POP ELEMENt = %d",data[top]);
				top--;
			case 3:
				break;
			default:
			printf("PLEASE ENTER VALID INPUT");
			break;	
				
			} 	
		}
	}
}
