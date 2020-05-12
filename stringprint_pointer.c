#include<stdio.h>
int main()
{
	char name[]="Nimesh";
	int i;
	for(i=0;i<7;i++)
	{
		printf("%c",name[i]);
	}
	for(i=0;name[i]!='\0';i++)
	printf("%c",name[i]);
	char *ptr;
	ptr=&name;
	while(*(ptr)!='\0')
	{
	printf("%c",*(ptr));
	ptr++;
	}
	return 0;
}
