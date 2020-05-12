#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
	int rem;
	rem=n1%n2;
	if(rem==0)
	return n2;
	else{
		return (gcd(n2,rem));
	}
}
int main()
{
	int n1,n2,res;
	cin>>n1>>n2;
	res=gcd(n1,n2);
	cout<<"GCD OF "<<n1<<" AND "<<n2<<" is "<<res<<endl;
	
	return 0;
}
