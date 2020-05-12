#include<iostream>
using namespace std;
class adder
{
	private:
	int a,b;
	public:
	void add(int a,int b)
	{
	int c=a+b;
	cout<<c<<endl;	
	}	
	void input()
	{
		cout<<"num1"<<endl;
		cin>>a;
		cout<<"num2"<<endl;
		cin>>b;
	}
}o1;
int main()
{
	o1.input();
	o1.add();	
}
