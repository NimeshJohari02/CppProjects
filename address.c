#include<stdio.h>
void main()
{
	int i=3;
	int *j,**k;
	j=&i;
	k=&j;
	printf(" i=  %d \n ",i);
	printf(" address of i = %u \n ",&i);
	printf(" address of i = %u \n ",j);
	printf(" address of j = %u \n ",&j);
	printf(" value of i = %u \n ",*(&i));
	printf(" value of j = %u \n ",j);	
	printf(" value of j = %u \n ",*(&j));	
	printf(" address of i = %u \n ",*k);
	printf(" value of i = %u \n ",**k);
	printf(" address of j = %u \n ",k);
	printf(" value of j = %u \n ",*k);
	printf(" address of k = %u \n ",&k);
	printf(" value of k = %u \n ",k);
}
