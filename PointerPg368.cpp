#include<iostream>
//6 basic pointer operations.
using namespace std;
int main()
{
	int x,y,*p,*q;
	p=&x;
	cout<<p<<endl;
	*p=12;
	cout<<x<<endl;
	q=p;
	cout<<*q<<endl;
	*q=133;
	cout<<*p<<endl<<x;
//termination abrupt with this 	*q=63;
	return 0;
}
