#include<iostream>
#include<math.h>
using namespace std;
int satis(int a,int b, int c, int d)
{
	if(pow(a,3)+pow(b,3)+pow(c,3)-pow(d,3)==0)
	return 1;
	else
	return 0;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;(satis(a,b,c,d))>0?cout<<"yes":cout<<"NO";
	return 0;
}

