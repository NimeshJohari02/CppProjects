#include<iostream>
#include<math.h>
using namespace std;
float term(int x,int i)
{
	return(1*pow(x,i));
}
int main()
{
	cout<<"x=\?"<<endl;
	int x,n;
	cin>>x;
	cout<<"n=\?"<<endl;
	cin>>n;
	float sum=0.0;
	for(int i=0;i<=n;i++)
	{
		sum+=term(x,i);
	}
	cout<<"The Sum Thus Obtained is "<<sum<<endl;
	return 0;
}
