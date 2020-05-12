#include<iostream>
using namespace std;
int linear(int a[],int *lower,int *upper,int search)
{
	int flag=0;
	for(int i=0;i<upper-lower;i++)
	{
		if(a[*lower+i]==search)
		{
			flag=1;
		}
	}
	return flag;
}
void jump_search(int a[],int n,int *upper,int *lower,int jump,int search)
{
	int i2=0;
	//upper= jump initialized karke bheja hai;
	if(search>a[*lower]&&search>a[*upper])
	{
		*lower=*lower+jump;
		*upper=*upper+jump;
		jump_search(a,n,upper,lower,jump,search);
	}
	else if (search>a[*lower]&&search<a[*upper])
	{
	 i2=linear(a,lower,upper,search);
	}
	if(i2)
	{
		cout<<"Element found"<<endl;
	}
	else
	{
		cout<<"Not FOund "<<endl;
	}
}
int main()
{
	int a[100],n;
	
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
	int search;
	cout<<"Enter The search element "<<endl;
	cin>>search;
	int jump=3;
	int top;
	int lower=0;
	jump_search(a,n,&top,&lower,jump,search);
	
	return 0;
}
