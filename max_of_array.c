#include<stdio.h>
//Approach 1
void main()
{
	int i,a[100],n,r,t;
	printf("Enter the number of elemnts you want");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
/*	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("\n ============================\n");
	printf("%d",a[n-1]);
}*/
 //Approach 2
int largest =a[0];
for(i=0;i<n;i++)
{
	if(a[i]>largest)
	{
		largest=a[i];
	}
}
printf("Largest Element is %d",largest);
}
