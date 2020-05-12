#include<iostream>
using namespace std;
void func(char a)
{
	for(int i=0;i<=5;i++)
	{
		cout<<(char)(a+i)<<"\t ";
	}
}
int main()
{
	char a;
	cout<<"Enter a character "<<endl;
	cin>>a;
	func(a);
	return 0;
}
