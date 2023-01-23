//doubly link list
//all complete

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define pb push_back

class node
{
public:
    int data;
    node *next;
    node *prev;
};

class doublelinklist
{
private:
    node *h,*q,*p,*temp;
    int n,new_value=0;
    int x;
public:
    doublelinklist()
    {
        h=NULL;
        q=NULL;
    }

    void create()
    {
        cout<<"how many numbers??"<<endl;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            p=new node;
            cout<<"enter value? "<<endl;
            cin>>new_value;
            p->data=new_value;
            p->next=NULL;
            p->prev=NULL;
            if(h==NULL)
            {
                h=p;
                q=p;
                temp=p;
            }
            else
            {
                p->prev=temp;
                q->next=p;
                q=p;
                temp=p;

            }


        }
        cout<<"\n\tsuccessfully created!!!"<<endl;
    }

    void insertt()
    {
        if(h==NULL)
        {
            cout<<"create link list first"<<endl;
        }
        else
        {
            q=h;
            cout<<"\tat which position"<<endl;
            cout<<"\t1. at beginning"<<endl;
            cout<<"\t2. after a value"<<endl;
            int qq;
            cin>>qq;

            int y;
            cout<<"\tenter new value"<<endl;
            cin>>y;
            if(qq==1)
            {
                p=new node;
                p->data=y;
                p->next=q;
                q->prev=p;
                h=p;
                cout<<"\t inserted!!!"<<endl;
                n++;
            }

            else if(qq==2)
            {
                cout<<"after which value? "<<endl;
                cin>>x;
                int k=search_value(x);
                if(k)
                {
                    p=new node;
                    p->data=y;
                    p->next=NULL;
                    p->prev=NULL;
                    for(int i=0; i<n; i++)
                    {
                        if(q->data==x && q->next!=NULL)
                        {
                            q->next->prev=p;
                            p->next=q->next;
                            q->next=p;
                            p->prev=q;
                            n++;

                        }
                        else if(q->data==x && q->next==NULL) //if shes r node
                        {
                            q->next=p;
                            p->prev=q;
                            n++;


                        }
                        q=q->next;
                    }
                    cout<<"\n\tinserted"<<endl;
                }

                else cout<<"\n\twrong input"<<endl;
            }

        }

    }

    void dlt()
    {
        cout<<"enter value to dlt"<<endl;
        cin>>x;
        int k=search_value(x);
        if(k)
        {
            p=h;
            q=NULL;
            if(p->data==x)  //1st node
            {
                h=h->next;
                cout<<"\tsuccessefully deleted"<<endl;
                n--;
            }
            else
            {
                while(p->next!=NULL && p->data!=x)
                {
                    q=p;
                    p=p->next;
                }
                q->next=p->next;
                delete p;
                cout << "\n\tSUCCESSFULLY DELETED!!" << endl<<endl;
                n--;
            }
        }
        else cout<<"value not found"<<endl;
    }
    int search_value(int a)
    {
        p=h;
        for(int i=0; i<n; i++)
        {
            if(p->data==a)
            {
                return 1;
            }
            p=p->next;
        }
        return 0;
    }

    void display()
    {
        p=h;
        cout<<"\t\n";
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;

        }
    }

    void update()
    {
        p=h;
        int y;
        cout<<"enter value you want to update?"<<endl;
        cin>>x;

        int k=search_value(x);
        if(k)
        {
            cout<<"enter new value?"<<endl;
            cin>>y;
            while(p->data!=x)
            {
                p=p->next;
            }
            p->data=y;
            cout<<"\n\tupdated"<<endl;
        }
        else cout<<"value not found"<<endl;
    }

    void displaydetails()
    {
        p=h;
        int i=1;
        cout<<endl;
        while(p!=NULL)
        {
            cout<<"value"<<" "<<p->data<<" "<<"address"<<" "<<p<<" "<<"previous address"<<" "<<p->prev<<" "<<"next adress"<<" "<<p->next<<endl;
            p=p->next;
            i++;

        }
    }
};

int main()
{
    doublelinklist a1;
    int choice,call;
    while(1)
    {
        cout<<endl<<"\n****Menu****"<<endl;
        cout<<"1. Create"<<endl;
        cout<<"2. Insert"<<endl;
        cout<<"3. Delete"<<endl;
        cout<<"4. Update"<<endl;
        cout<<"5. Search"<<endl;
        cout<<"6. Display"<<endl;
        cout<<"7. detailsDisplay"<<endl;
        cout<<"8. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice==8) break;
        else
        {
            switch(choice)
            {
            case 1:
            {
                a1.create();
            }
            break;
            case 2:
            {
                a1.insertt();
            }
            break;
            case 3:
            {
                a1.dlt();
            }
            break;
            case 4:
            {
                a1.update();
            }
            break;
            case 5:
            {
                cout<<"which value you want to search?"<<endl;
                cin>>call;
                int k=a1.search_value(call);
                if(k) cout<<"present in linked list"<<endl;
                else cout<<"doesnt present in linked list"<<endl;
            }
            break;
            case 6:
            {
                a1.display();

            }
            break;
            case 7:
                a1.displaydetails();
                break;
            }
        }
    }

}


// a1.displaydetails();



