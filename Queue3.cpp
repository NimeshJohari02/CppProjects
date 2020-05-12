#include<iostream>
using namespace std;
#define max_size 10
void removeDevotee(int,int *,int*,int*);
int isEmptyQ(int,int*,int*);
int isNotFull(int queue[], int*, int*, int*) ;
void addDevotee(int queue[], int *front, int *rear, int *qno) {
    if(*rear == max_size-1) {
        cout<<"Queues Full";
    } else if(isEmptyQ(queue, &front, &rear) == 1) {
        *front=0;
        *rear =0;
        queue[*rear]=1;
        cout<<"You found a place in the queue "<<*qno<<endl;
    } else {
        *rear = *rear+1;
        queue[*rear]=1;
        cout<<"\n You found a place in the queue "<<*qno<<endl;
    }
}
void removeDevotee(int queue, int *front, int *rear, int *qno) {
    if(isEmptyQ(queue, &front, &rear) == 1) {
        cout<<"\nThe queue"<<*qno<<" is empty"<<endl;
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
        cout<<"\nThe Queue"<<*qno<<" is not yet full!"<<endl;
        return 1;
    }
}
int main() {
    int choice,q1[max_size],q2[max_size],q3[max_size],f1=-1,f2=-1,f3=-1,r1=-1,r2=-1,r3=-1,cq;
        cout<<"\nChoose the category: ";
        cout<<"\n 1. Normal Devotee";
        cout<<"\n 2. Special Devotee";
        cout<<"\n 3. Special Devotee with puja";
        cout<<"\n 4.Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
    while(choice!=4) 
		{
        if(choice == 1) {
            cq=3;
            addDevotee(q3,&f3,&r3,&cq);
            if(isNotFull(q2,&f2,&r2,&cq) == 1) {
                removeDevotee(q3,&f3,&r3,&cq);
                addDevotee(q2,&f2,&r2,&cq);
            } else {
               cout<<"\nQueue 1 and 2 are full the person stays in Queue 3";
            }
            if(isNotFull(q1,&f1,&r1,&cq) == 1) {
                removeDevotee(q2,&f2,&r2,&cq);
                addDevotee(q1,&f1,&r1,&cq);
            } else {
                cout<<"\nQueue level 1 and 2 are full! the devotee stays in Queue 3 for some time!";
            }

        } 
        else if(choice == 2) {
            cq=2;
            addDevotee(q2,&f2,&r2,&cq);
            if(isNotFull(q1,&f1,&r1,&cq) == 1) {
                removeDevotee(q2,&f2,&r2,&cq);
                addDevotee(q1,&f1,&r1,&cq);
            } else {
               cout<<"\nQueue level 1 is full! the devotee stays in Queue 2 for some time!";
            }
        }
        else if(choice == 3) {
            cq=1;
            addDevotee(q1,&f1,&r1,&cq);
        }
        else {
            cout<<"\nInvalid Input";
        }
       cout<<"\nChoose the category: ";
        cout<<"\n 1. Normal Devotee";
        cout<<"\n 2. Special Devotee";
        cout<<"\n 3. Special Devotee with puja";
        cout<<"\n 4.Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
    }  
	return 0; 
}
