#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	public:
		test(int e,int f,int g)
		{
			a=e;
			b=f;
			c=g;
		}
		void showdata()
		{
			cout<<a<<endl<<b<<endl<<c<<endl;
		}
	test(test &t)
	{
		a=t.a;
		b=t.b;
		c=t.c;
	}	
};

int main()
{
	test o1(12,13,14);
	o1.showdata();
	test o2=o1;
	o2.showdata();
	return 0;
}
