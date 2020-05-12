
// CPP program to find infix for 
// a given postfix. 
#include<iostream>
#include<string.h>
using namespace std; 
bool isOperand(char x) 
{ 
   return (x >= 'a' && x <= 'z') || 
          (x >= 'A' && x <= 'Z'); 
} 
char a[100]; 
int top=-1;
void push(char i)
{	
	top++;
	a[top]=i;
}
void pop()
{
		char item=a[top];
		top--;
}
void display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<endl;
} 
string getInfix(string exp) 
{ 
    for (int i=0; exp[i]!='\0'; i++) 
    { 
        // Push operands 
        if (isOperand(exp[i])) 
        { 
           string op(1, exp[i]); 
           push(op); 
        } 
  
        // We assume that input is 
        // a valid postfix and expect 
        // an operator. 
        else
        { 
            string op1 =a[top]; 
            pop(); 
            string op2 =a[top]; 
            pop(); 
            push("(" + op2 + exp[i] + 
                   op1 + ")"); 
        } 
    } 
  
    // There must be a single element 
    // in stack now which is the required 
    // infix. 
    return top(); 
} 
  
// Driver code 
int main() 
{ 
    string exp;
	cin>>exp; 
    cout << getInfix(exp); 
    return 0; 
} 

