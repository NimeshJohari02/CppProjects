#include<iostream>
using namespace std;
int &fun(int &a)
{
	cout<<a<<endl;
	return a;
}
int main()
{
	int x=12;
	fun(x)=25;//since fun x returns a refrence to the varibalbe x itself thus fun(x) returns x itself thus it can be sude to the lef side of the assginment operator
	cout<<x;
	
	return 0;
}
