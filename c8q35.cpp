#include<iostream>
#include<string>
using namespace std;
int main()
{
	char c ;
	cout<<"Enter a Character "<<endl;
	cin>>c;
	if(c>=65&&c<=90)
	{
		cout<<"Upper Case"<<endl;
		cout<<"Corresponding Lower Case is "<<(char)((int)c+32);
	}
	else if(c<=122&&c>=97){
	cout<<"Lower Case"<<endl;
	cout<<"Corresponding upper case is "<<(char)((int)c-32)<<endl;
}
	else
	{
		cout<<c<<"is not a letter"<<endl;
	}
	return 0;
}
