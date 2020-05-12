#include<iostream>
#include<cstring>

using namespace std;

class List
{
    public:
        struct Node
        {
            int regNo;
            char name[10];
            float quizMarks;
            Node *next;
        };

        Node *start;
        
        void firstThingsFirst()
        {
            start=NULL;
        }

        void get()
        {
            int x=0;
            while (x!=-1)
            {
                int regNo;
                char name[10];
                float quizMarks;

                //cout<<"\n\nMenu:\n1. Input (head)\n2. Input (middle)\n3. Input (tail)\n4. Delete (head)\n5. Delete (middle)\n6. Delete (tail)\n7. Sort\n8. Exit\nX = ";
                cout<<"\n\nMenu:\n1. Input (head)\n3. Input (tail)\n4. Delete (head)\n6. Delete (tail)\n7. Sort\n8. Exit\nX = ";
                cin>>x;
                switch (x)
                {
                    case 1: cout<<"\tRegistration Number (int) = "; cin>>regNo;
                            cout<<"\tStudent Name (string) = "; cin>>name;
                            cout<<"\tQuiz Marks (float) = "; cin>>quizMarks;
                            fAdd(regNo,name,quizMarks);
                            break;
                    /*case 2: cout<<"\tInsert after = "; int p; cin>>p;
                            cout<<"\tRegistration Number (int) = "; cin>>regNo;
                            cout<<"\tStudent Name (string) = "; cin>>name;
                            cout<<"\tQuiz Marks (float) = "; cin>>quizMarks;
                            mAdd(p,regNo,name,quizMarks);
                            break;*/
                    case 3: cout<<"\tRegistration Number (int) = "; cin>>regNo;
                            cout<<"\tStudent Name (string) = "; cin>>name;
                            cout<<"\tQuiz Marks (float) = "; cin>>quizMarks;
                            bAdd(regNo,name,quizMarks);
                            break;
                    case 4: fDelete(); break;
                    /*case 5: cout<<"\tDelete after = "; cin>>p;
                            mDelete(p);
                            cout<<"\tTask complete.";
                            break;*/
                    case 6: bDelete(); break;
                    case 7: bubbleSort(); break;
                    default: cout<<"\n\nLIST SESSION TERMINATED.\n\n"; x=-1;
                }
            }
        }

        void fAdd(int rN,char n[10],float qM)
        {
            Node *obj=new Node;
            obj->regNo=rN;
            strcpy(obj->name,n);
            obj->quizMarks=qM;
            obj->next=NULL;

            if (start==NULL) { start=obj; return; }
            
            obj->next=start;
            start=obj;
        }

        /*int mAdd(int rNADD,int rN,string n,float qM)
        {
            Node *obj=new Node,*temp;
            obj->regNo=rN;
            obj->name=n;
            obj->quizMarks=qM;
            obj->next=NULL;
            if (start==NULL) start=obj;//0 nodes
            else
            {
                temp=start;
                while (temp->next!=NULL && (temp->next)->regNo!=rNADD) temp=temp->next;
                obj->next=temp->next;
                temp->next=obj;
            }
            delete obj;
            delete temp;
            return 0;
        }*/

        void bAdd(int rN,char n[10],float qM)
        {
            Node *obj=new Node,*temp;
            obj->regNo=rN;
            strcpy(obj->name,n);
            obj->quizMarks=qM;
            obj->next=NULL;

            if (start==NULL) start=obj;//0 nodes
            
            temp=start;
            while (temp->next!=NULL) temp=temp->next;
            temp->next=obj;
        }

        void fDelete()
        {
            if (start==NULL) { cout<<"[Y] delete complete"; return; }
            start=start->next;
        }

        /*int mDelete(int rNDELETE)
        {
            Node *temp=start,*cache;
            while (temp->next!=NULL && (temp->next)->regNo!=rNDELETE) temp=temp->next;
            // < node@MAX
            if (temp->next!=NULL)
            {
                cache=temp->next;
                temp->next=(temp->next)->next;
            }
            delete temp;
            delete cache;
            return 0;
        }*/

        void bDelete()
        {
            Node *temp=start;

            if (start==NULL) { cout<<"[X] underflow"; return; }//0 nodes
            
            if (start->next==NULL) { start=NULL; return; }//1 node
            
            while ((temp->next)->next!=NULL) temp=temp->next;
            temp->next=NULL;
            
            cout<<"[Y] delete complete";
        }

        void bubbleSort()
        {
            for (Node *i=start;i->next!=NULL;i=i->next)
                for (Node *j=start;j->next!=NULL;j=j->next)
                    if (j->regNo>(j->next)->regNo)
                    {
                        int regNo=j->regNo;
                        char name[10]; strcpy(name,j->name);
                        float quizMarks=j->quizMarks;

                        j->regNo=(j->next)->regNo;
                        strcpy(j->name,(j->next)->name);
                        j->quizMarks=(j->next)->quizMarks;

                        (j->next)->regNo=regNo;
                        strcpy((j->next)->name,name);
                        (j->next)->quizMarks=quizMarks;
                    }
        }

        void link(List obj)
        {
            Node *temp=start;
            while (temp->next!=NULL) temp=temp->next;
            temp->next=obj.start;
            
            cout<<"[Y] link complete";
        }

        void display()
        {
            cout<<"\n";
            Node *temp=start;
            while (temp!=NULL)
            {
                cout<<temp->regNo<<"\n";
                temp=temp->next;
            }
        }
};

int main()
{
    List l1,l2; l1.firstThingsFirst(); l2.firstThingsFirst();
    cout<<"SET - A STUDENTS";
    l1.get();
    cout<<"SET - B STUDENTS";
    l2.get();
    l1.link(l2); l1.bubbleSort();
    l1.display();
}
