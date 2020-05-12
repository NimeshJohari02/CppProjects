#include<iostream>
using namespace std;
void pattern(int n,int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==0||j==0||i==r-1||j==c-1)
			{
				cout<<n;
			}
			else
			{
			 	cout<<" ";
			}
		}
		cout<<"\n";
	} 
}

int main()
{
	pattern(2,3,3);

}
