#include<iostream>
using namespace std;
int Prime(int n, int i){
	if(n%i==0)
	return 1;
	if(i>n/2)
	return 0;
	Prime(n,i+1);
}
int main()
{
	int prime,i=2,n;
	cout<<"Enter a Number "<<endl;
	cin>>n;
	prime=Prime(n,i);
	if(prime==1)
	cout<<"Not Prime "<<endl;
	else
	cout<<"Prime"<<endl;
	return 0;
	

}
