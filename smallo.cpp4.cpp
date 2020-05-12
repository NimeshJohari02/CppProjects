#include<iostream>
using namespace std;
void smallo(int *x, int *y)
{
	*x>*y?(*y=0):(*x=0);
}
int main()
{
	int x,y;
	cin>>x>>y;
	smallo(&x,&y);
	cout<<x<<endl<<y;
}
