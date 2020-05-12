#include<stdio.h>
int checkprime(int a)
{
	int i,counter=0;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		counter++;
	}
	if(counter>1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void main()
{
	int i,a;
	printf("\n Enter A Number \n ");
	scanf("%d",&a);
	printf("\n==========================================\n");
	for(i=2;i<a;i++)
	{
		if((a%i)==0)
		{
			if(checkprime(i)==1)
				{
					printf("\n  a prime factor of the Number %d \n ",i);
				}		
		}
	}
}
