#include<stdio.h>
void swapr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("The New Value of  X is = %d  \n The New Value of  Y = %d",x,y);

}
int main()
{
	int a,b;
	printf(" Enter The Value of X");
	scanf("%d",&a);
	printf(" Enter The Value of Y");
	scanf("%d",&b);
	swapr(&a,&b);
	printf("The New Value of  X is = %d  \n The New Value of  Y = %d",a,b);
	return 0;
	
}
