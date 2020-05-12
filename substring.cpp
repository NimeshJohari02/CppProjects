#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100];
	cout<<"Enter the string "<<endl;
	cin.getline(a,100);
	int n=strlen(a);
	cout<<"ENter the staring position of the substring"<<endl;
	int substr;
	cin>>substr;
	for(int i=0;i<n;i++)
	{
		if(i==substr)
		{
			for(int j=i;j<n;j++)
			{
				cout<<a[j];
			}
		}
	}
}
