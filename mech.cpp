#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int a[100] = {};
int top = -1;
int size = 100;
void push(int item)
{
    if(top+1>=size)
    {
        printf("stack is full");
    }
    else
    {
        top=top+1;
        a[top] = item;
    }
}
int pop()
{
    int k;
    if(top+1<1)
    {
        printf("stack is empty");
    }
    else
    {
        k = a[top];
        top = top -1;
        return k;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);
    }
}
int calc(char o,int a,int b)
{
    if(o=='-')
    {
        return a-b;
    }
    else if(o=='+')
    {
        return a+b;
    }
    else if(o=='*')
    {
        return a*b;
    }
    else if(o=='/')
    {
        return a/b;
    }
}
int main()
{
    char x[20] = "-*7+52/4-15";
    char c[20];
    int op1,op2,r;
    for(int i=10;i>=0;i--)
    {
        if( isdigit(x[i]) != 0)
        {
            c[0]= x[i];
            push(atoi(c));
        }
        else if(x[i]== '*'|| x[i]== '+'|| x[i]== '-'|| x[i]== '/')
        {
            op1=pop();
            op2=pop();
            r = calc(x[i],op1,op2);
            push(r);
        }
    }
    printf("%d",a[top]);
}
