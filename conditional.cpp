#include<iostream>
using namespace std;
int main()
{
	int a,b,c,big;
	cout<<"Enter 3 Numbers  \n ";
	cin>>a>>b>>c;
	big=(a>b&&a>c)?a:((b>a&&b>c)?b:c);
	cout<<"The Largest No is "<<big;
	return 0;
	
}
