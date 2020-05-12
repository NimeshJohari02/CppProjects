#include<stdio.h>
struct bank
{
	int accno,balance;
char name[100];	
}b[3];
int main()
{	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter Name \n");
		scanf("%s",&b[i].name);
		printf("Enter accno\n");
		scanf("%d",&b[i].accno);
		printf("Enter balance \n");
		scanf("%d",&b[i].balance);}
	for(i=0;i<3;i++)
	{
		if(b[i].balance==100)
		printf("%s",b[i].name);
	}
}
