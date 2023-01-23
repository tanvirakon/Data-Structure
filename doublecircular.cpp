#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    node *prev;
    int data;
    node *next;
};
class  DoublyLinkedList
{
public:
    node *temp;
    node *newnode;
    node *p;
    node *head;
    int n,x;
    void CreateDLL()
    {
        head=0;
        cout<<"How many nodes:";
        cin>>n;
        for(int i=0; i<n; i++)
        {
            newnode=new node;
            cout<<"enter elements:";
            cin>>x;
            newnode->data=x;
            newnode->prev=0;
            newnode->next=0;
            if(head==0)
            {
                head=temp=newnode;
            }
            else
            {
                temp->next=newnode;
                newnode->prev=temp;
                temp=newnode;
            }
        }
    }
    void Insertatbeg()
    {
        newnode=new node;
        int x;
        cout<<"enter the element that u want to insert at beginning:";
        cin>>x;
        newnode->data=x;
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            head->prev=newnode;
            newnode->next=head;
            head=newnode;
        }
    }
    void InsertatEnd()
    {
        temp=head;
        newnode=new node;
        int x;
        cout<<"enter the element that u want to insert at end:";
        cin>>x;
        newnode->data=x;
        newnode->prev=0;
        newnode->next=0;
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;

    }
    void Insertatpos()
    {
        int i=1,pos,x;
        newnode=new node;
        cout<<"enter the element that u want to insert at position:";
        cin>>pos;
        cout<<"enter element:";
        cin>>x;
        newnode->data=x;
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
        }
        else
        {
            temp=head;
            while(i<pos-1)
            {
                temp=temp->next;
                i++;
            }
            newnode->prev=temp;
            newnode->next=temp->next;
            temp->next=newnode;
            newnode->next->prev=newnode;
        }
        cout<<"inserted at the position"<<endl;
    }
    void Deletefrombeg()
    {
        if(head==0)
        {
            cout<<"linked list is empty"<<endl;
        }
        else
        {
            temp=head;
            head=head->next;
            head->prev=0;
            delete temp;
            cout<<"Deleted from beginning"<<endl;
        }
    }
    void Deletefromend()
    {
        if(head==0)
        {
            cout<<"linked list is empty"<<endl;
        }
        else
        {
            temp=head;
            while(temp->next!=0)
            {
                temp=temp->next;
            }
            temp->prev->next=0;
            cout<<"deleted from the end"<<endl;
        }
    }
    void Deletedfromapos()
    {
        temp=head;
        int pos,i=1;
        cout<<"enter the positon u want to delete:";
        cin>>pos;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        cout<<"Deleted from position"<<endl;
    }
    void Display()
    {
        temp=head;
        cout<<"the linked list is: ";
        cout<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->" ;
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    DoublyLinkedList dll;
    int option,n;
    for(;;)
    {
        cout<<"**Main Menu**"<<endl;
        cout<<" 1. create\n 2. insert at begining\n 3. insert after position\n 4. insert at end\n 5. display\n 6. delete at beginning\n 7. delete at end\n 8. delete at position\n 9.exit"<<endl;
        cout<<"Enter your option(1-8):";
        cin>>option;
        if(option==9)
        {
            break;
        }
        switch (option)
        {
        case 1:
            dll.CreateDLL();
            break;
        case 2:
            dll.Insertatbeg();
            break;
        case 3:
            dll.Insertatpos();
            break;
        case 4:
            dll.InsertatEnd();
            break;
        case 5:
            dll.Display();
            break;
        case 6:
            dll.Deletefrombeg();
            break;
        case 7:
            dll.Deletefromend();
            break;
        case 8:
            dll.Deletedfromapos();
            break;
        }
    }
}
