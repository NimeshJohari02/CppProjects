#include<iostream>
using namespace std;
#include<string.h>
class student
{
	int roll;
	char name[30];
	public:
	student()
	{
		roll=12;
		strcpy(name,"Nimesh");
		cout<<"Default Constriuctor Initialized";
		cout<<"\n ";
		}	
	void showdata()
	{
		cout<<"Roll is "<<roll;
		cout<<"name is "<<name;
		cout<<endl;
	}
};
int main()
{
	student s1;
	s1.showdata();	
	return 0;
}
