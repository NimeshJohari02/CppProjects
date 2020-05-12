#include<stdio.h>
const int max_size = 10;
void addRider(int queue[], int *front, int *rear, int *qno) {
    if(*rear == max_size-1) {
        printf("\nQueues Are Full");
    } else if(isEmptyQ(queue, &front, &rear) == 1) {
        *front=0;
        *rear =0;
        queue[*rear]=1;
        printf("\n placed in the queue %d",*qno);
    } else {
        *rear = *rear+1;
        queue[*rear]=1;
        printf("\n placed in the queue %d",*qno);
    }
}
void removeRider(int queue, int *front, int *rear, int *qno) {
    if(isEmptyQ(queue, &front, &rear) == 1) {
        printf("\nThe queue %d is empty", *qno);
        return;
    } else if (*front == *rear) {
        *front = -1;
        *rear = -1;
    } else {
        *front = *front + 1;
    }
}
int isEmptyQ(int queue[], int *front, int *rear) {
    if(*front == -1 && *rear == -1) {
        return 1;
    } else {
        return 0;
    }
}
int isNotFull(int queue[], int *front, int *rear, int *qno) {
    if(*rear == max_size-1) {
        return 0;
    } else {
        *qno = *qno-1;
        printf("\n Queue %d is not full",*qno);
        return 1;
    }
}
int main() {
    int choice,q1[max_size],q2[max_size],q3[max_size],f1=-1,f2=-1,f3=-1,r1=-1,r2=-1,r3=-1,cq;
        printf("\nChoose the category: ");
        printf("\n 1. ADULT");
        printf("\n 2. CHILDREN");
        printf("\n 3. VIP");
        printf("\n 4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
    while(choice!=4) 
		{
        if(choice == 1) {
            cq=3;
            addRider(q3,&f3,&r3,&cq);
            if(isNotFull(q2,&f2,&r2,&cq) == 1) {
                removeRider(q3,&f3,&r3,&cq);
                addRider(q2,&f2,&r2,&cq);
            } else {
                printf("\nQueue 1 and 2 are full you remain in Queue 3");
            }
            if(isNotFull(q1,&f1,&r1,&cq) == 1) {
                removeRider(q2,&f2,&r2,&cq);
                addRider(q1,&f1,&r1,&cq);
            } else {
                printf("\nQueue 1 and 2 full you stay in Queue 3 ");
            }

        } 
        else if(choice == 2) {
            cq=2;
            addRider(q2,&f2,&r2,&cq);
            if(isNotFull(q1,&f1,&r1,&cq) == 1) {
                removeRider(q2,&f2,&r2,&cq);
                addRider(q1,&f1,&r1,&cq);
            } else {
                printf("\nQueue 1 is full you stay in Queue 2");
            }
        }
        else if(choice == 3) {
            cq=1;
            addRider(q1,&f1,&r1,&cq);
        }
        else {
            printf("\nInvalid Input");
        }
                printf("\nChoose the category: ");
        printf("\n 1. ADULT");
        printf("\n 2. CHILDREN");
        printf("\n 3. VIP");
        printf("\n 4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
    }   
}
