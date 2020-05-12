#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void getdigit(int i,int *t,int *u)
{
	*u=i%10;
	i=i/10;
	*t=i;
}
int main()
{
	int diff;
	cin>>diff;
	for(int i=0;i<50;i++)
	{
		int original_unit,original_tens;
		getdigit(i,&original_tens,&original_unit);
		int reverse_unit,reverse_tens;
//		reverse_unit=original_tens;
//		reverse_tens=original_unit;
		reverse_tens=(original_unit==6?9:(original_unit==9?6:original_unit));
		reverse_unit=(original_tens==6?9:(original_tens==9?6:original_tens));
		int x=original_tens*10+original_unit;
		int y=reverse_tens*10+reverse_unit;
		if((y-x)==diff)
		{
			cout.setf(ios::fixed);
			cout<<setprecision(2)<<x<<" "<<y;
		}
	}
	return 0;
}
