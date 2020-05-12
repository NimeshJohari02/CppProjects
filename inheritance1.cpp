#include<iostream>
using namespace std;
class base
{
	protected:
	int a=12;
	int b=13;
};
class derived:public base
{
	
	int c=18,d=19;
	public:
	void show()
	{
		cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	}
};
int main()
{
	derived d1;
	d1.show();
	return 0;
}
