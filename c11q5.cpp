#include<iostream>
#include<math.h>
using namespace std;
int sqlarge(int *x,int *y)
{
	if(*x>*y)
	return (pow(*x,2));
	else
	return pow(*y,2);
}
int sum(int a)
{
	int s=0;
	int n=a;
	while(n!=0)
	{
		int a=n;
		s=s+(a%10);
		n=n/10;
	}
	return s;
}
int main()
{
	int a,b,l;
	cin>>a>>b;
	l=sqlarge(&a,&b);
	int c=sum(l);
	cout<<c;
	return 0;
}
