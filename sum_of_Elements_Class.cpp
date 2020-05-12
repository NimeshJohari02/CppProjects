#include<iostream>
using namespace std;
class item
{
	int a[100],n;
	public:
		void show()
		{
			for(int i=0;i<n;i++)
			cout<<a[i]<<"  ";
		}
		int summation()
		{
			int sum=0;
			cout<<"Enter the Number of Elements"<<endl;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				sum=sum+a[i];
			}
			return sum;
		}
	
};
int main()
{
	item i1;
	int c=i1.summation();
	cout<<c;
	return 0;
}
