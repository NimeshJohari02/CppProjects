#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cin>>a>>b;
	cout<<"a="<<a<<"  "<<" b = "<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"a="<<a<<" "<<" b= "<<b<<endl;
	  
	return 0;
}
