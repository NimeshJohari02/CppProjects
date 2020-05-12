#include<iostream>
using namespace std;
int a[100],l,h;
int partition(int l, int h)
{
	int pivot=a[l];
	int i=l;
	int j=h;
	while(i<j)
	{
		do
		{
			i++;
		}while(a[i]<=pivot);
		do
		{
			j++;
		}while(a[i]>=pivot);
		if(i<j)
		{
			int temp;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
		int temp=a[l];
		a[l]=a[j];
		a[j]=temp;
		return j;
}
void quicksort(int l, int h)
{	
if(l<h)
{
	int j=partition(l,h);
	quicksort(l,j);
	quicksort(j+1,h);
}
}
int main()
{
	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int *ptr;
	ptr=&a[0];
	for(int i=0;i<size;i++)
	{
		cin>>*(ptr+i);
	}
	int *ptr1,*ptr2;
	ptr1=&l;
	ptr2=&h;
	*(ptr1)=0;
	*(ptr2)=size-1;
	quicksort(*ptr1,*ptr2);
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
