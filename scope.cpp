#include<iostream>
using namespace std;
void dou(int *x)
{
	int y;
	y=*x;
	*x=2*y;
}
int main()
{
	int num;
	cout<<"Enter a number ";
	cin>>num;
	dou(&num);
	cout<<num;
	return 0;
}
