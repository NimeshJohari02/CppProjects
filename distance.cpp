#include<iostream>
using namespace std;
#include<math.h>
int getdist(int x1,int x2,int y1,int y2)
{
	return(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
}
int main()
{
	cout<<getdist(120,96,204,74);
}
