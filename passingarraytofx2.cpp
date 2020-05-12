#include<iostream>
using namespace std;
void display(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	int a[100],n;
	cin>>n;
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	display(&a[0],n);
}

