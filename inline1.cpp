#include<iostream>
using namespace std;
inline int square(int x)
{
	return x*x;
}

int main()
{
	
	for(int i=0;i<10;i++)
	{
		cout<<square(i)<<endl;
		}	
	return 0;
}
