#include<iostream>
using namespace std;
class complex
{
private:
int a,b;
public:
void setdata(int,int);
void showdata();
complex add(complex);
};
void complex::setdata(int x,int y)
{
	a=x;
	b=y;
}
void complex::showdata()
{
	cout<<" a= "<<a<<" b="<<b<<endl;
}
complex complex::add(complex c)
{
	complex temp;
	temp.a=a+c.a;
	temp.b=b+c.b;
	return temp;
}	
int main()
{
	complex c1,c2,c3;
	c1.setdata(4,3);
	c2.setdata(6,6);
	c1.showdata();
	c2.showdata();
	c3=c1.add(c2);
	c3.showdata();
	return 0;
}
