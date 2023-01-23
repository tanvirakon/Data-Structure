#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

class linklist
{
private:
    node *h, *q, *p, *temp;
    int n, new_value = 0;
    int x;

public:
    linklist()
    {
        h = NULL;
        q = NULL;
    }
    void create()
    {
        cout << "how many numbers??" << endl;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            p = new node;
            cout << "enter value? " << endl;
            cin >> new_value;
            p->data = new_value;
            p->next = NULL;
            if (h == NULL)
            {
                h = p;
                q = p;
            }
            else
            {
                q->next = p;
                q = p;

            }


        }

    }
    void display()
    {
        temp = h; //last node head e niye aslm

        for (int i = 0; i < n; i++)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertt()
    {
        if (h == NULL) cout << "create link list first" << endl;
        else
        {
            q = h;
            cout << "\tat which position" << endl;
            cout << "\t1. at beginning" << endl;
            cout << "\t2. after a value" << endl;
            int qq;
            cin >> qq;

            int y;
            cout << "\tenter new value" << endl;
            cin >> y;

            if (qq == 1)
            {
                p = new node;
                p->data = y;

                p->next = q;

                h = p;
                cout << "\t inserted!!!" << endl;
                n++;
            }
            else if (qq == 2)
            {
                p = new node;
                p->data = y;
                p->next = NULL;
                cout << "after which value? " << endl;
                cin >> x;

                if (isInsideList(x))
                {
                    while (q->next != NULL)
                    {
                        if (q->data == x)
                        {
                            p->next = q->next;
                            q->next = p;
                            break;
                        }
                        else {q = q->next;}
                    }
                    n++;
                    //  cout<<n<<endl;
                    cout << "\tinserted" << endl;
                }
                else cout << "value is not in the list" << endl;
            }
        }
    }
    void dlt()
    {

        if (h == NULL)
        {
            cout << "create link list first" << endl;
        }
        else
        {
            cout << "which value to be delated" << endl;
            cin >> x;
            p = h;
            q = h;
            int k = isInsideList(x);
            if (k)
            {
                if (p == h && p->data == x) //jdi node 1ta hy ba 1st node delate
                {
                    h = h->next;

                    cout << "\n\tSUCCESSFULLY DELETED!!" << endl << endl;
                    n--;
                }
                else
                {
                    while (p->next != NULL && p->data != x)
                    {
                        q = p;
                        p = p->next;
                    }
                    q->next = p->next;
                    delete p;
                    cout << "\n\tSUCCESSFULLY DELETED!!" << endl << endl;
                    n--;
                }
            }
            else cout << "\n\twrong input" << endl;
        }
    }

    void update()
    {
        p = h;
        int y;
        cout << "enter value you want to update?" << endl;
        cin >> x;

        int k = isInsideList(x);
        if (k)
        {
            cout << "enter new value?" << endl;
            cin >> y;
            while (p->data != x)
            {
                p = p->next;
            }
            p->data = y;
            cout << "\tvalue updated" << endl;
        }
        else cout << "value not found" << endl;

    }

    bool isInsideList(int a)
    {
        node *t = new node;
        t = h;
        for (int i = 0; i < n; i++)
        {
            if (t->data == a)
            {
                return true;

            }
            t = t->next;
        }
        return false;
    }


};
int main()
{
    linklist obj1;
    int choice, call;
    while (1)
    {
        cout << endl << "****Menu****" << endl;
        cout << "1. Create" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Update" << endl;
        cout << "5. Search" << endl;
        cout << "6. Display" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice == 7) break;
        else
        {
            switch (choice)
            {
            case 1:
            {
                obj1.create();
            }
            break;
            case 2:
            {
                obj1.insertt();


            }
            break;
            case 3:
            {
                obj1.dlt();
            }
            break;
            case 4:
            {
                obj1.update();
                break;
            }
            case 5:
            {
                cout << "which value you want to search?" << endl;
                cin >> call;
                int k = obj1.isInsideList(call);
                if (k) cout << "\tpresent in linked list" << endl;
                else cout << "\tdoesnt present in linked list" << endl;
            }
            break;
            case 6:
            {
                obj1.display();
                break;
            }


            }
        }

    }


}
