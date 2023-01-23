#include<bits/stdc++.h>
using namespace std;
#define nnnn 10
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
    { q=new node();
        q->data=n;
        q->next=NULL;
        q->prev=NULL;
        if(p==NULL)
        { p=q;
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
                }}}}
    void traverse(node *p)
    {
        if(p==NULL) return;
        else
        {
            cout<<p<<" "<<p->prev<<" "<<p->data<<" "<<p->next<<endl;
            traverse(p->prev);
            traverse(p->next);
        }}};
int main()
{
    bst b53;
    int ax[nnnn];
    for(int i53=0; i53<nnnn; i53++) cin>>ax[i53];
    int top=-1;
    int s[nnnn];
    for(int i53=0; i53<nnnn; i53++)
    {
        top++;
        s[i53]=ax[i53];
}
     cout<<"stack "; for(auto i:s) cout<<i<<" ";
    int qq[nnnn]= {0};
    int frontt =-1,rear=0;
    int i=0;
    for(int i53=top; i53>=0; i53--)
    {
        if(s[i53]%2==1)
        { qq[i]=s[i53];
            rear++;
            i++;
        }}
    cout<<"\nqueue ";   for(int i53=0;i53<nnnn;i53++){
    if(qq[i53]!=0) cout<<qq[i53]<<" ";
    }
    int ii53=0;
    for(int i53=frontt+1; i53<=rear; i53++)
    { if(qq[i53]!=0)
b53.create(qq[i53]);
    }cout<<endl;
    b53.traverse(h);
}
