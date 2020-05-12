#include<stdio.h>
# define max 50
int stack[max];
int top=-1;
int isfull()
{
if(top==max-1)
return 1;
else
return 0;
}
int push(int x)
{
if(isfull())
{
printf("stack is full");
}
else
{
top=top+1;
stack[top]=x;
}
}
int pop()
{
if(isempty())
printf("stack is empty");
else
{
int x;
x=stack[top];
top=top-1;
return x;
}
}
int isempty()
{
if(top==-1)
return 1;
else
return 0;
}
int main()
{
int n,ch,no,out,j,stu;
char cho;
printf("Enter the no. of students:");
scanf("%d",&stu);
for(j=0;j<stu;j++)
{
printf("1.Push\n2.Pop:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the no. of %dth student:",top+2);
scanf("%d",&no);
push(no);
break;
case 2:
out=pop();
printf("%d\n",out);
}
}
int nos=top,i;
for(i=nos;i>9;i--)
pop();
printf("nos of top 10 students are:");
for(i=9;i>-1;i--){
printf("%d\n",pop());
}
return 0;
}

