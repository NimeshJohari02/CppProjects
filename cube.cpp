#include<iostream>
using namespace std;
int cube(int a)
{
	return a*a*a;
}
int main()
{
	int a,c;
	cout<<"Enter a Number "<<endl;
	cin>>a;
	cout<<"Cube Of "<<a<<" is "<<cube(a)<<endl;
	return 0;
}
