#include<bits/stdc++.h>
using namespace std;
//complete

class node
{
public:
    int data;
    node *next;
};
class queuee
{
    node *p,*h,*q,*f,*r,*temp;
public:
    queuee()
    {
        h=NULL;
        f=NULL;
        r=NULL;
        //  q=NULL;
    }
    void enqueue(int a)
    {
        p=new node;
        p->data=a;
        p->next=NULL;

        if(h==NULL)
        {
            h=p;
            f=p;
            r=p;

            h->next=h;
            cout<<"\tenqueued\n";

        }
        else
        {
            r->next=p;
            p->next=h;
            r=p;
            cout<<"\tenqueued\n";


        }
    }

    void dequeue()
    {
        if(h==NULL) cout<<"\tqueue is empty\n";
        else if(f==r){
             cout<<"\tdequed "<<f->data<<endl;
             delete f;
             f=NULL;
             h=NULL;
             r=NULL;
        }
        else
        {
            r->next=h->next;
            h=h->next;

            cout<<"\tdequed "<<f->data<<endl;
            delete f;
            f=h;
        }
    }

    void display()
    {
        if(h==NULL) cout<<"\tput value in queue first\n";
        else
        {
            temp=h;
            while(temp->next!=h)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<temp->data<<endl;
        }
    }

};

int main()
{
    int n;
    queuee qq;
    while(1)
    {
        int ch;
        cout<<"\n********* Menu ********"<<endl;
        cout<<"1. Enqueue \n2. Dequeue \n3. Display \n4. Exit\n";
        cout<<"enter your choise"<<endl;
        cin>>ch;
        if(ch==4) break;
        else
        {
            switch (ch)
            {
            case 1:
            {
                cout<<"enter value to enqueue"<<endl;
                cin>>n;
                qq.enqueue(n);
            }
            break;
            case 2:
            {
                qq.dequeue();
 }
            break;
            case 3:
            {
                qq.display();


            }
            break;
            }


        }
    }

}
