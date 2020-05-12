#include<iostream>
using namespace std;
int find(int h)
{
	int s=0;
	if(h<0)
	return 0;
	if(h==1)
	{
		return 1;
	}
	else
	{
	s=h-1+find(h-1);	
	}
	return s;
}
int main()
{
	cout<<find(5);
	return 0;
}
