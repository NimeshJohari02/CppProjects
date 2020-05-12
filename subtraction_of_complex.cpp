#include<iostream>
using namespace std;
class comp
{
	int a,b;
	public:
		void setdata(int,int);
		void showdata();
		comp sub(comp);
};
void comp::setdata(int x,int y)
{
	a=x;
	b=y;
}
void comp::showdata()
{
	cout<<" a ="<<a<<" b = "<<b<<endl;
}
comp comp::sub(comp c)
{
	comp temp;
	temp.a=a-c.a;
	temp.b=b-c.b;
	return temp;
}
int main()
{
	comp c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(6,1);
	c3=c1.sub(c2);
	c3.showdata();
}
