#include<bits/stdc++.h>
using namespace std;
//complete
class st
{
    int arr[5],top,n;
public:
    st()
    {
        top=-1;
        n=0;
    }
    void push(int a)
    {
        if(n>=5) cout<<"\tstack full"<<endl;
        else
        {
            top++;
            arr[top]=a;
            n++;
            cout<<"\tpushed!!"<<endl;
            cout<<"\ttop "<<top;
        }
    }
    void pop()
    {
        if(top<=-1) cout<<"\tstack empty"<<endl;
        else
        {
            cout<<"\tpoped "<<arr[top]<<endl;
            n--;
            top--;
            cout<<"\ttop "<<top<<endl;
        }

    }

    void display()
    {
        if(top>=0)
        {
            for(int i=0; i<n; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else cout<<"\tstack empty"<<endl;
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
