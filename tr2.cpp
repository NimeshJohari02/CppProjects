#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,x;
	float sum=0.0;	
	cout<<"x= \?"<<endl;
	cin>>x;
	cout<<"n=\?"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		sum+=pow(x,i);
	}
	cout<<sum
	return 0;
}
