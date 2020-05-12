#include<stdio.h>
int sum(int a)
{
	int s=0; 
	if (a==1)
	return 1;
	else 
	{
		return s+a%10+sum(a/10);
	}
}
void main()
{
	int num;
	scanf("%d",&num);
	int c=sum(num);
	printf("%d",c);
	
}
