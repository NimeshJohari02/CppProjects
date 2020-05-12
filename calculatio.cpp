#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"a=? ";
	cin>>a;
	cout<<"b=? ";
	cin>>b;
	float choice=0.0;
	cout<<"Enter Choice Of Operator \n";
	cin>>ch;
	switch(ch)
	{
		case '+':
			choice=a+b;
			cout<<a<<"\t"<<ch<<"\t"<<b<<"\t = "<<choice;
			break;
		case '-':
			choice=a-b;
			cout<<a<<"\t"<<ch<<"\t"<<b<<"\t = "<<choice;
			break;	
		case '*':
			choice=a*b;
			cout<<a<<"\t"<<ch<<"\t"<<b<<"\t = "<<choice;
			break;	
		case '/':
			if(b==0)
			{
				cout<<"Zero Error"<<endl;
				break;
			}
			else{
			
			choice=(float)a/b;
			cout<<a<<"\t"<<ch<<"\t"<<b<<"\t = "<<choice;
			}
			break;	
		case '%':
			choice=a%b;
			cout<<a<<"\t"<<ch<<"\t"<<b<<"\t = "<<choice;
			break;
			default:
			cout<<"invalid Operator :/ "<<endl;	
			
	}
	
	return 0;
	
}
