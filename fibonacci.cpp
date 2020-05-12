#include<iostream>
using namespace std;
int fibonacci(int n)
{
	if(n==1||n==2)
	return 1;
	else
	return (fibonacci(n-2)+fibonacci(n-1));
}
int main()
{
	int n;
	cout<<"Enter The Number  of terms You want The Fibbonaci Series For";
	cin>>n;
	for(int i=1;i<=n;i++)
	cout<<"  "<<fibonacci(i)<<"  ";
	return 0;
}
