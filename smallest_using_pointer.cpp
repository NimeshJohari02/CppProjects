#include<stdio.h>
int smallest(int *a, int *b)
{	
	return(*a>*b?:*b,*a);
}
void main()
{
int a[100];
int n,i,temp,*min;
printf("Enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	smallest(&a[i],&a[j]);
}
printf("Smallest is ",a[0]);
}
