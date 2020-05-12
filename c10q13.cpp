#include<iostream>
#include<math.h>
using namespace std;
int factorial(int);
float term(int x,int i)
{
	if(i%2==0)
	{
		return (-pow(x,i)/factorial(i));
	}
	else
	{
		return(pow(x,i)/factorial(i)) ;
	}
}
	
int factorial(int a)
{
	if (a==1)
	{
		return 1;
		
	}
	else 
	{
		return (a*factorial(a-1));
	}
}


int main()
{
	int x,n;
	cout<<"Enter The Value Of x \?"<<endl;
	cin>>x;
	cout<<"Enter The Number Of Terms |?"<<endl;
	cin>>n;
	float sum=0.0;
	for(int i=1;i<=n;i++)
	{
		sum+=term(x,i);
	}
	cout<<"Final Sum Obatined is "<<sum<<endl;
	return 0;
	
}
