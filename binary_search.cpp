#include<iostream>
using namespace std;
int binary_search(int a[],int n,int s)
{
	int top=n;
	int bottom=0;
	int mid=(top+bottom)/2;
	int it=n/2+1;
	while(it>0)
	{
		if(a[mid]==s)
		{
			cout<<"Element found at "<<mid+1;
			return 1;
		}
		else if(a[mid]>s)
		{
			top=mid-1;
			mid=(top+bottom)/2;
		}
		else if(a[mid]<s)
		{
			bottom=mid+1;
			mid=(top+bottom)/2;
		}
		it--;
	}
	return 0;
}
int main()
{
	int s,n,a[100];
	cout<<"Enter the size of the array sorted"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter Search Element"<<endl;
	cin>>s;
	int ans=binary_search(a,n,s);
	if(ans==0)
	cout<<"Not Found";
	return 0;
}
