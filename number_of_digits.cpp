#include<iostream>
#include<math.h>
using namespace std;
int num_dig(int n)
{
	for(int i=0;i<10;i++)
	{
		int q=n/pow(10,i);
		if(q==0)
		{
			return i;
		}
	}
}
int num_rev(int n,int dig)
{
	int rev;
	if(dig>=0)
	{
	int rem=n%10;
	rev=rem*pow(10,dig)+num_rev(n/10,dig-1);
	}
	return rev;
}
int main()
{
	int n;
	cout<<"Enter a Number"<<endl;
	cin>>n;
	int c=num_dig(n);
	cout<<"Number of digits in the number is "<<c<<endl;
	int r2=num_rev(n,c-1);
	cout<<"reversed number is "<<r2;
	return 0;
}
