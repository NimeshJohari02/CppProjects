#include<stdio.h>
int main()
{
	int n,a[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		int counter=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				counter++;
			}
		}
		if(counter==1)
		printf("%d",a[i]);
	}
	return 0;
}
