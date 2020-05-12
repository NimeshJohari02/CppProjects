#include<stdio.h>
#include<string.h>
struct str
{
	char str1[50];
}s1[10];
int main()
{
	int i,j;
	char temp[50];
	printf("Enter 10 Words");
	scanf("%s",&s1[i].str1);
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(s1[i],s1[j])>0)
			{
				strcpy(temp,s1[i]);
				strcpy(s1[i],s1[j]);
				strcpy(s1[j],temp);
			}
		}
	}
	printf("\n in lexographical order \n ");
	for(i=0;i<10;i++)
	printf("%s",s1.str1[i]);
	return 0;
}
