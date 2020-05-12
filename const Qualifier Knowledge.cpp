#include<iostream>
using namespace std;
int main()
{
	int i=5;
	int &j=i;
	int p=12;
	j=p;
	cout<<i<<endl<<j;
	p=20;//note refrence can not be changed once the j has been refrenced to i it can not be changed further ;
	cout<<i<<endl<<j<<endl;
	return 0;
}
