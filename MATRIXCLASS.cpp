#include<iostream>
using namespace std;
class matrix 
{
	int a[100][100],size;
	public:
		int returnsize();
		matrix operator+(matrix o1);
		matrix operator-(matrix o1);
		matrix operator*(matrix o1);
		friend void operator >>(istream &i1,matrix &o1)
{
	cout<<"Enter The Size (n X n) \n";
	cin>>o1.size;
	for(int i=0;i<o1.size;i++)
	{
		for(int j=0;j<o1.size;j++)
		{
			i1>>o1.a[i][j];
		}
	}
	
}
		friend void operator <<(ostream &o,matrix &o1)
		{
			
	for(int i=0;i<o1.size;i++)
	{
		for(int j=0;j<o1.size;j++)
		{
			cout<<o1.a[i][j]<<"   ";
		}
		cout<<endl;
	}

		}
};

matrix matrix::operator+(matrix o1)
{
	matrix o3;
	o3.size=o1.size;
	for(int i=0;i<o1.size;i++)
	{
		for(int j=0;j<o1.size;j++)
		{
			o3.a[i][j]=a[i][j]+o1.a[i][j];
		}
	}
	return o3;
}
matrix matrix::operator-(matrix o1)
{
	matrix o3;
	o3.size=o1.size;
	for(int i=0;i<o1.size;i++)
	{
		for(int j=0;j<o1.size;j++)
		{
			o3.a[i][j]=a[i][j]-o1.a[i][j];
		}
	}
	return o3;
}
matrix matrix::operator*(matrix o1)
{
	matrix o3;
	o3.size=o1.size;
	for(int i=0;i<o1.size;i++)
	{
		for(int j=0;j<o1.size;j++)
		{
			for(int k=0;k<o1.size;k++)
			{
				o3.a[i][j]+=a[i][k]*o1.a[k][j];
			}
		}
	}
	return o3;
}
int main()
{
	matrix o1,o2,o3;
	cin>>o1;
	cout<<o1;
	cout<<"Now Input 2nd Matrix \n";
	cin>>o2;
	cout<<"Displaying Second Matrix \n";
	o3=o1+o2;
	cout<<"Displaying The O3 \n\n";
	cout<<o3;
	return 0;
}
