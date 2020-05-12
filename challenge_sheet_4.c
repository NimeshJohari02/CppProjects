#include<stdio.h>
#define max 50
int main()
{
 char s[max],exp[100];
 int top=-1;
 int i=0,n=0,flag=1;
 printf("enter the infix expression\n");
 gets(exp);
 for(i=0;exp[i]!='\0';i++)
 n++;
 for(i=n-1;i>=0;i--)
 {
 
 if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
 {
 top++;
 s[top]=exp[i];
 }
 }
 for(i=n;i>=0;i--)
 {
 if(exp[i]==')')
 {
 if(s[top]=='(')
 top--;
 else
 {
 printf("missing opening paranthesis\n");
 flag=0;
 }
 }
 else if(exp[i]==']')
 {
 if(s[top]=='[')
 top--;
 else
 {
 printf("missing opening square brackets\n");
 flag=0;
 }
 }
 else if(exp[i]=='}')
 {
 if(s[top]=='{')
 top--;
 else
 {
 printf("missing opening flower braces\n");
 flag=0;
 }
 }
 
 }
 if(flag==0)
 {
 if(top==-1)
 {
 
 printf("therefore expression is not balanced");
 return 0;
 }
 }
 if(top==-1)
 printf("expression is balanced\n");
 else
 {
 
 
 while(top!=-1)
 {
 if(s[top]=='(')
 printf("missing closing paranthesis\n");
 else if(s[top]=='{')
 printf("missing closing flower braces\n");
 else if(s[top]=='[')
 printf("missing closing square brackets\n");
 top--;
 
 }
 printf("therefore expression is not balanced\n");
}
}


