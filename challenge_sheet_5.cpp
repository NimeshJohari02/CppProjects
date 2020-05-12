#include<iostream>
#include<string.h>
using namespace std;
 
void towers(int n, char s, char d, char i)
{
    if(n==1)
    {
        cout<<" move disk "<<n<<" from "<<s<<" to "<<d;
        return ;
    }
    else
    {
        towers(n-1, s, i, d);
        cout<<" move disk "<<n<<" from "<<s<<" to "<<d;
        towers(n-1, i, d, s);
    }
}
 
int main()
{
    int n;
    char source='A';
    char dest='C';
    char inter='B';
    cout<<"enter"<<endl;
    cin>>n;
    towers(n, source, dest, inter);
	return 0;
}
