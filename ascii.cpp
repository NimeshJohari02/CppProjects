#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int ch;
while(ch!=2)
{
char a;
cout<<"Enter A character";
cin>>a;
cout<<"ASCII value is "<<(int)a;
cout<<"\n Press 1 for another try \n 2 for exit"<<endl;
cin>>ch;
}
}
