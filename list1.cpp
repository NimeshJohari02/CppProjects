#include<iostream>
#include<list>
using namespace std;
int main()
{
	list <int> l1={69,12,14,67};
	list<int>::iterator i1=l1.begin();
	while(i1!=l1.end())
	{
		cout<<*l1<<endl;
		l1++;
	}
	
	return 0;
}
