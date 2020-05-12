#include<stdio.h>
int main()
{
int a[100],b[100];
int n,i,temp;
printf("Enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	b[i]=a[n-1-i];
}
for (i=0;i<n;i++)
{
	printf("%d \n",a[i]);
}
printf("\n ");
for (i=0;i<n;i++)
{
	printf("\n %d \n ",b[i]);
}
}
