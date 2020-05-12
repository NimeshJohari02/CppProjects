#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	cout<<"Enter The Number of Elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		int counter=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				counter++;
			}
		}
		if(counter==1)
		{
			cout<<a[i];
		}
	}
	
	return 0;
}
