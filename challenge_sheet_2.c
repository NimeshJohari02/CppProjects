#include<stdio.h> 
#include<stdlib.h> 
#define SIZE 100 
int forw[100],back[100],curr,ch,top1=-1,top2=-1; 
void push_forw() { 
    if(top1+1>=SIZE) 
        printf("\nOverflow\n"); 
    else{ 
        top1++; 
        forw[top1]=curr;
    } 
} 
 
void push_back() { 
    if(top2+1>=SIZE) 
        printf("\nOverflow\n"); 
    else { 
        top2++; back[top2]=curr; 
    } 
} 
 
void pop_forw() { 
    top1--; 
} 
 
void pop_back() { 
    back[top2]=curr; 
    top2--;
} 
 
int main() { 
    printf("Enter your current element\n"); 
    scanf("%d",&curr); 
    flag: printf("Do you want to go forward or backward?"); 
    scanf("%s",&ch); 
    if(ch=='F' || ch=='f' || ch=='B' || ch=='b'){
        switch(ch) { 
            case 'F': 
            case 'f':
                printf("Enter your element\n"); 
                push_back(); 
                pop_forw(); 
                scanf("%d",&curr); 
                if(top1==-1) 
                    printf("Current=%d backward=%d\n",curr,back[top2]); 
                else 
                    printf("Current=%d Back=%d Forward=%d\n",curr,back[top2],forw[top1]); 
                    goto flag; 
            case 'B': 
            case 'b':
            push_forw(); 
            pop_back(); 
            if(top2==-1) 
                printf("Current=%d forward=%d\n",curr,forw[top1]); 
            else
                printf("Current=%d Back=%d Forward=%d\n",curr,back[top2],forw[top1]); 
                goto flag; 
        } 
    } 
    else 
        exit(0); 
} 


