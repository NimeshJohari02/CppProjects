#include<iostream>
using namespace std;
class matrix
{
int r,c,a[100][100];
public:
friend void operator >>(istream &input,matrix &o1)
{
    input>>o1.r;
    cout<<"\n";
    input>>o1.c;
    cout<<"\n";
    for(int i=0;i<o1.r;i++)
    {
    for(int j=0;j<o1.c;j++)
    {
    input>>o1.a[i][j];
    }
    }
}
friend void operator <<(ostream &out,matrix &o1)
{
out<<"NOW PRINTING\n\n";
for(int i=0;i<o1.r;i++)
{
for(int j=0;j<o1.c;j++)
{
out<<o1.a[i][j]<<"     ";
}
out<<"\n\n";
}
}
};
int main()
{
matrix o1;
cin>>o1;
cout<<o1;
return 0;
}
