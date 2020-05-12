#include<stdio.h>
void bubble_sort(int a[100],int n)
{
	int i,round,temp;
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-1-round;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
}

void main()
{
	int i,a[100],n;
	printf("Enter The Number Of Elements Of The Array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n =======================================\n");
	printf("Sorted Array Is");
	bubble_sort(a,n);
		for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
}

