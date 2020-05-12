#include<iostream>
using namespace std;
int main()
{
	int a[100],n;
	cout<<"No of elements ? "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n;k++)
				{
					a[k]=a[k+1];//left shift kehte hai isko k+1 waale element ko k pe shift kar diya hai jissse
				}
				n--;//decrement n so as the left shift above decremented array size by 1
				j--;//iif the next element  that replaces j+1 is also same then to compare it ;
			}
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
}

