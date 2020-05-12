#include<iostream>
using namespace std;
int x=20;
class A
{
	int x=23;
	int y=12;
	public:
	void swap()
	{
		int temp;
		temp=::x;
		::x=y;
		y=temp;
		cout<<"x="<<::x<<"y = "<<y<<endl;
	}
		
					
};
int main()
{
	A o1;
	o1.swap();
	return 0;
}
