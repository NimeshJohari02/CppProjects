#include<iostream>
using namespace std;
class test
{
int a,b;
public:
test(int c,int d);	
void showdata()
{
	cout<<a<<endl<<b<<endl;
}
};
test::test(int c=12,int d=69)
{
	a=c;
	b=d;
	
}
int main()
{
	test o1(69,699);
	o1.showdata();
	test o2=test(90,99);
	o2.showdata();
	test o3;
	o3.showdata();
	return 0;
}
