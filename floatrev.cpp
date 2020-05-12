#include<iostream>
using namespace std;
void rev(float a[],int size)
{
	float temp;
	for(int i=0;i<(size/2);i++)
	{
		temp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=temp;
		}	
	for(int i=0;i<size;i++)
	cout<<a[i]<<"\t";
}

int main()
{
	float a[100];
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	cin>>a[i];
	rev(a,size);
	return 0;
}
