#include<stdio.h>
void main()
{
	int i,a[100],n,*p,small;
	printf("No of elements ? \n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=&a[0];
	small=*p;
	for(i=0;i<n-1;i++)
	{
		if(*(p+i)>*p)
		{
			small=*p;
		}
		else
		{
			small=*(p+i);
		}
	}
	printf("%d",small);
	
}
