#include <iostream>
using namespace std;
//complete
class node
{
public:
    int data;
    node *next;
};


class st
{
private:
    node *h,*q,*p,*temp;
    int n,new_value=0,top;
    int x;

public:
    st()
    {
        h=NULL;
        q=NULL;
        top=-1;
    }
    void push(int a)
    {
        p=new node;
        p->data=a;
        p->next=NULL;
        if(h==NULL)
        {
            h=p;

            top++;
            cout<<"top "<<top<<endl;
            cout<<"\tvalues ";
            display();
        }
        else
        {
            p->next=h;
            h=p;
            top++;
            cout<<"top "<<top<<endl;
            cout<<"\tvalues ";
            display();
        }

    }

    void pop()
    {
        if(top<0) cout<<"stack empty"<<endl;
        else
        {
            cout<<"poped element is "<<h->data<<endl;
            q=h->next;
            delete h;
            h=q;
            top--;
            cout<<"top "<<top<<endl;
            cout<<"\tvalues ";
            display();
        }
    }

    void display()
    {
        temp=h;//last node head e niye aslm

        for(int i=0; i<=top; i++)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

};


int main()
{



    st obj;
    int ch, val,temp;
    while(1)
    {
        cout<<endl<<"\n****Menu****"<<endl;
        cout<<"1) Push"<<endl;
        cout<<"2) Pop "<<endl;
        cout<<"3) Display"<<endl;
        cout<<"4) Exit"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        if(ch==4) break;
        else
        {
            switch(ch)
            {
            case 1:
            {
                cout<<"enter value to push"<<endl;
                cin>>val;
                obj.push(val);
            }
            break;
            case 2:
            {
                obj.pop();
            }
            break;
            case 3:
            {
                obj.display();
            }
            break;
            }
        }



    }
}
