#include<stdio.h>
#include<stdlib.h>
struct sales
{
	char name[100];
	int s[5];
};
void insertion_sort(int a[],int n)
{
	int i;
	for( i=1;i<n;i++)
	{
		int j=i-1;
		int x=a[i];
		while(x<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
}
void showname(struct sales k)
{
	printf("%s",k.name);
}
int main()
{
	int i,n,j;
	scanf("%d",&n);
	struct sales arr[100];

	for(i=0;i<n;i++)
	{
		scanf("%s",&arr[i].name);
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i].s[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		insertion_sort(arr[i].s,5);
		printf("\n\nSorting Completed maximum element for arr[%d] is %d \n",i,arr[i].s[4]);
	}
	printf("\n\n");
	int max=-1;
	struct sales temp;
	for( i=0;i<n;i++)
	{
		if(arr[i].s[4]>max)
		{
			max=arr[i].s[4];
			temp=arr[i];
		}
	}
	showname(temp);
	return 0;
}
