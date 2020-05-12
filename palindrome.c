#include <stdio.h>
#include <string.h>
char stack[50];
int top=-1;
void push(char arg)
{
    top=top+1;
    stack[top]=arg;
}
char pop()
{
    char c;
    c=stack[top];
    top=top-1;
    return c;
}
int main()
{
    char string[50];
    int i,count=0,len;
    printf("Enter string");
    scanf("%s",&string);
    len = strlen(string);
    for(i=0;i<len;i++)
    {
        push(string[i]);
    }
    for (i=0;i<len;i++)
    {
        if(string[i]==pop())
        {
            count++;
        }
    }
    if (len==count)
    {
        printf("STRING IS PALINDROME\n");
    } 
    else
    {
        printf("STRING IS NOT PALINDROME\n");
    }
    return 0;
}

