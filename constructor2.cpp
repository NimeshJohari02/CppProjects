#include<iostream>
using namespace std;
class x
{
int m[5];
public:
	x();
	~x();
	
};
x::x()
{
	cout<<"Another Method to initialize the constructor"<<endl; 
}
x::~x()
{
	cout<<"Maa chod ki constructor ki "<<endl;
}
int main()
{
	x t1;
		
	return 0;
}


