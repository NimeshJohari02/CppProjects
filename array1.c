#include<stdio.h>

void main()
{
	int i=3;int *x;
	float j=1.5;float *y;
	char k='c';char *z;
	printf("Value Of i = %d",i);
	printf("Value Of j = %f",j);
	printf("Value Of k = %s",k);
	x=&i;
	y=&j;
	z=&k;
	printf("Value Of x = %u",x);
	printf("Value Of y = %u",y);
	printf("Value Of z = %u",z);
}
