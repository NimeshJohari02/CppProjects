#include<stdio.h>
int main()
{
int a[100];
int n,i,temp;
printf("Enter the size of the array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i+=2)
{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
}
for (i=0;i<n;i++)
{
	printf("%d \n ",a[i]);
}
}
