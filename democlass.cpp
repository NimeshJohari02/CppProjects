#include<iostream>
using namespace std;
class demo
{
	private:
	static int counter;
	public:
		void increase_count()
		{
			counter++;
		}
		void showcount()
		{
			cout<<"Show count ="<<counter;
		}
		void setcounter()
		{
			int counter=0;
		}
	
};

int main()
{
	demo obj1;
	obj1.setcounter();
	demo obj2;
	obj1.increase_count();
	obj2.increase_count();
	
	
	
	
}
