#include<iostream>
using namespace std;
class trial
{
	int a,b;
	public:
	trial(int x=0,int y=0)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<a<<"   "<<b<<endl;
	}
	trial operator++();
};
trial trial::operator++()
{
	a++;
	b++;
	return *this;
}

int main()
{
	trial o1(5,6),o2;
	o2=++o1;
	o2.show();
	return 0;
}
