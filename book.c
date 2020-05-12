#include<stdio.h>
struct book
{
int page,price;
char name[20];	
}b[100];
int main()
{
	int n,i;
	printf("Enter the number of books");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
	scanf("%d",&b[i].page);
	scanf("%s",b[i].name);
	scanf("%d",&b[i].price);
	
}
for(i=0;i<n;i++){
	printf("%d",b[i].price);
	printf("%s",b[i].name);
}
	return 0;
}
