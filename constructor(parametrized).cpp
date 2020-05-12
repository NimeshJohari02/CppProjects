#include<iostream>
using namespace std;
class x
{
	int age,roll,pin;
	public:
		x(int,int,int);
		void showdata();
};
x::x(int x=12, int y=13,int z=69)
{
	age=x;
	roll=y;
	pin=z;
}
void x::showdata()
{
	cout<<endl<<age<<endl<<roll<<endl<<pin;
}
int main()
{
	x x1;
	x1.showdata();
	x x2(1,1,69);
	x2.showdata();
	return 0;
}
