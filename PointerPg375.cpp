#include<iostream>
using namespace std;
int main()
{
	int n,a[100],*ptr;
	ptr=a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
		cin>>*(ptr+i);
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	/* cin>>a[i];
	cout<<"a[0] = "<<a[0];
	cout<<"a[0 ] by pointer ="<<*(ptr)<<endl;
	*/
	return 0;
}
