#include<iostream>
using namespace std;
void display(int a[10])
{
	for(int i=0;i<10;i++)
	cout<<endl<<a[i]<<endl;
}
int main()
{
	int age[10],i;
	cout<<"Enter Elements "<<endl;
	for(i=0;i<10;i++)
	cin>>age[i];
	display(age);
	return 0;
}
