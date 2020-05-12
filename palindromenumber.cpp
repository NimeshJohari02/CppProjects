#include<iostream>
using namespace std;
int main()
{
	int num,digit,rev;
	cout<<"Enter a number "<<endl;
	cin>>num;
	int n=num;
	do
	{
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}while(num!=0);
	cout<<"The reverse of the number is  "<<rev<<endl;
	if(n==rev)
	cout<<"Numerical PAllindrome ";
	else
	cout<<"phat gya na "<<endl;
	
}
