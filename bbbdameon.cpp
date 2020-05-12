#include<iostream>
using namespace std;
int sumdig(int n)
{
	int sum;
	while(n!=0)
	{
		int q=n%10;
		sum=sum+q;
		n=n/10;
	}
	return sum;
}

int main()
{
	int n,k,j=0;
	cin>>n>>k;
	int a[10000];
	for(int i=0;i<30000;i++)
	{
		if(sumdig(i)==k)
		{
			a[j]=i;
			j++;
		}
	}
	int i=0;
	while(a[i]<n)
	{
		i++;
	}
	cout<<a[i];
	
		return 0;
}
