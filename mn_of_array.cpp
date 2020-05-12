#include<stdio.h>

void main()
{
	int i,a[100],n,r,t;
	printf("Enter the number of elemnts you wan t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=n;i++)
	{
		if(a[i+1]>a[i])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("\n ============================\n");
	printf("%d",a[n-1]);
}
