#include<stdio.h>
int factorial2(int n)
{
	int i,fac=1;
	for(i=n;i>=1;i--)
	{
		fac=fac*i;
	}
	return fac;
}

/*int factorial_1(int n)
{
	if (n==1)
	return 1;
	else 
	return n*factorial(n-1);
}*/

void main()
{
	int n,d;
	scanf("%d",&n);
	d=factorial2(n);
	printf("%d",d);
}
