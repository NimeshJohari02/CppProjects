#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
# define MAX 20
char str[MAX],stack[MAX];
int top=-1;
void push(char c)
{
   stack[++top]=c;
}
char pop()
{
   return stack[top--];
}
void post_in()
{
   int n,i,j=0;
   char a,b,op,x[20];
   printf("Enter the postfix expression\n");
   fflush(stdin);
   gets(str);
   strrev(str);
   n=strlen(str);
   for(i=0;i<MAX;i++)
      stack[i]='\0';
   printf("Infix expression is:\t");
   for(i=0;i<n;i++)
   {
      if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
      {
         push(str[i]);
      }
      else
      {
         x[j]=str[i]; j++;
         x[j]=pop(); j++;
      }
   }
   x[j]=str[top--];
    strrev(x);
   printf("%s\n",x);
}

void pre_in()
{
   int n,i;
   char a,b,op;
   printf("Enter the prefix expression\n");
   fflush(stdin);
   gets(str);
   n=strlen(str);
   for(i=0;i<MAX;i++)
      stack[i]='\0';
   printf("Infix expression is:\t");
   for(i=0;i<n;i++)
   {
      if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
      {
         push(str[i]);
      }
      else
      {
         op=pop();
         a=str[i];
         printf("%c%c",a,op);
      }
   }
   printf("%c\n",str[top--]);
}
void main()
{  int ch;
    while(1)
   {  printf("Enter choice:1 for prefix to infix, 2 for postfix to infix,3 to exit\n");
    scanf("%d",&ch);
    switch(ch)
    {case 1: {pre_in(); break;}
     case 2:{post_in(); break;}
     case 3:{exit(0); break;}
     default: printf("Wrong chioce\n");
   }
   printf("Enter 1 to continue, 0 to exit\n");
   scanf("%d",&ch);
   if(ch==0)
    break;
   }
}
