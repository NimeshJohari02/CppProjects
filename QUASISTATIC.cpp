#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number"<<endl;
	stack <int> s1;
	cin>>n;
	int a=n;
	while(n!=0)
	{
		int r=n%14;
		if(r<10)
		s1.push(r+48);
		else
		{
			s1.push(r-14+69);
		}
		n=n/14;
	}
	while(!s1.empty())
	{
		cout<<(char)s1.top();
		s1.pop();
		
	}
	return 0;
}



