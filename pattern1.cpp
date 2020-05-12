#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch='A';
	cout<<"Enter The No OF ROws "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int s=1;s<=i;s++)
		{
			cout<<(char)(ch-1+s)<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
