#include<iostream>
#include<math.h>
using namespace std;
int f(int n)
{
	if(n%2!=0&&n>0)
	return sqrt(n);
	else
	return pow(n,5);
}
int main()
{
	int c;
	cout<<"Enter a number "<<endl;
	cin>>c;
	cout<<f(c);
	return 0;
}
