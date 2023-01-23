#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
};

node *p,*temp,*q, *h;

class bst
{

public:
    bst()
    {
        h=NULL;
        p=NULL;
        q=NULL;
    }

    void create(int n)
    {
        q=new node();
        q->data=n;
        q->next=NULL;
        q->prev=NULL;
        if(p==NULL)
        {

            p=q;
            h=q;
        }

        else
        {
            p=h;
            while(1)
            {
                if(p->data>n)
                {
                    if(p->prev==NULL)
                    {
                        p->prev=q;
                        break;
                    }
                    else p=p->prev;
                }
                else if(p->data<n)
                {

                    if(p->next==NULL)
                    {
                        p->next=q;
                        break;
                    }
                    else p=p->next;
                }
            }
        }

    }
 void searchh(int x)
    {
        int xx=0;
        p=h;
        if(p==NULL)
        {
            cout<<"empty"<<endl;
            cout<<"search required "<<xx<<endl;
        }
        else
        {
            while(1)
            {
                if(p->data==x)
                {
                    cout<<"found"<<endl;
                    break;
                }
                else if(p->data>x)
                {
                    p=p->prev;
                    if(p==NULL)
                    {
                        cout<<"not found"<<endl;
                        break;
                    }
                }
                else
                {
                    p=p->next;
                    if(p==NULL)
                    {
                        cout<<"not found"<<endl;
                        break;
                    }
                }
                xx++;
            }
            cout<<"search required "<<xx<<endl;
        }
    }

    void traverse(node *p)
    {

        if(p==NULL) return;
        else
        {
            cout<<p<<" "<<p->prev<<" "<<p->data<<" "<<p->next<<endl;
            traverse(p->prev);

            traverse(p->next);
        }
    }



};




int main()
{

    int op,x;
    node *hv;
    bst bb;
    while(1)
    {

        cout<<"***** Menu*******"<<endl;
        cout<<"1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit "<<endl;
        cout<<"Enter your option:";
        cin>>op;
        if(op==5) break;
        switch(op)
        {
        case 1:
            cout<<"enter new value"<<endl;
            cin>>x;
            bb.create(x);
            break;
        case 2:
            cout<<"enter value to search"<<endl;
            cin>>x;
            bb.searchh(x);
            break;

        case 4:
            cout<<"your tree"<<endl;
            bb.traverse(h);
            break;
        case 3:
            cout<<"1.leaf node"<<endl;
            cin>>x;
            switch(x)
            {


            }

        }
    }

}
