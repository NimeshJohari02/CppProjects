#define SIZE 50 
 #include<stdio.h>  
 #include<string.h>
 #include <ctype.h> 
char s[SIZE]; int top=-1;  
char infx[50],prfx[50],ch,elem,pofx[50]; 
int i=0,k=0; 
void push(char elem) 
{ 
s[++top]=elem; 
} 
char pop() { return(s[top--]); } 
int pr(char elem) 
{ switch(elem) 
{ case '#': return 0; 
case '(': return 1; 
case '+': case '-': return 2; 
case '*': case '/': return 3; 
} 
} 
main() 
{  
int z;
 printf("1.postfix or 2.prefix\n"); 
scanf("%d",&z);
 switch(z) 
{ 
case 1:printf("\n\nRead the Infix Expression ? "); scanf("%s",infx); push('#'); while( (ch=infx[i++]) != '\0') { 
if( ch == '(') 
push(ch); 
else if(isalnum(ch)) 
pofx[k++]=ch; 
else 
if( ch == ')') 
{ 
while( s[top] != '(') 
pofx[k++]=pop(); 
elem=pop(); 
} 
else 
{ 
while( pr(s[top])>=pr(ch) )
 pofx[k++]=pop();
 push(ch); 
}
 }
 while( s[top] != '#')     /* Pop from stack till empty */ 
pofx[k++]=pop(); 
pofx[k]='\0';    /* Make pofx as valid string */ 
printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n",infx,pofx);
break;
 case 2: 

 printf("\n\nRead the Infix Expression ? ");
 scanf("%s",infx); push('#'); 
strrev(infx); 
while( (ch=infx[i++]) != '\0') 
{ 
if( ch == ')') 
push(ch); 
else 
if(isalnum(ch)) 
prfx[k++]=ch; 
else if( ch == '(') 
{ 
while( s[top] != ')') 
prfx[k++]=pop(); 
elem=pop(); 
} 
else
 { 
while( pr(s[top]) >= pr(ch) ) 
prfx[k++]=pop();
 push(ch);
 }
 } 
while( s[top] != '#') 
prfx[k++]=pop(); 
prfx[k]='\0';  
strrev(prfx); 
strrev(infx); 
printf("\n\nGiven Infix Expn: %s  Prefix Expn:%s\n",infx,prfx);}
 }

