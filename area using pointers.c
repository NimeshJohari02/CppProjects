#include<stdio.h>
void area(int r, int *p, int *a)
{
	*p=4*r;
	*a=r*r;
}
void main()
{
	int s,a,p;
	printf("ENtER THE side");
	scanf("%d",&s);
	area(s,&p,&a);
	printf("THE AREA IS =%d \n THE PERIMETRE IS =%d ",a,p);
	
}
