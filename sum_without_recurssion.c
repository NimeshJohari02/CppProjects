#include<stdio.h>
void main()
{
	int n,a,rem,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("SUm is = %d",sum);
}
