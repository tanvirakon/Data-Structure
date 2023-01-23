#include<bits/stdc++.h>
using namespace std;

class arrays
{
private:

    int n=0;
    int a[100];

public:
    void create()
    {
        cout<<"how many elements ";
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];

    }
    void lenear_search()
    {
        int k;
        cout<<"enter element to search"<<endl;
        cin>>k;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            lcount++;
            if(k==a[i])
            {
                cout<<"item found at index "<<i<<endl;
                flag=1;
            }
        }
        if(!flag) cout<<"item not at the list"<<endl;
    }
    void lst(int aa)
    {
        cout<<"search taken time "<<aa<<endl;
    }
    void binary_Search()
    {
        int k;
        cout<<"enter element to search"<<endl;
        cin>>k;
        int flag=0;
        sort(a,a+n);
        int low=0;
        int high =n-1;
        int mid=(low+high)/2;
        int  index=0;
        while(low<=high)
        {
            mid=(high+low)/2;
            if (k == a[mid])
            {
                flag=1;
                cout<<"found"<<endl;
                break;
            }
            else if (k > a[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if(!flag)  cout<<"item not at the list"<<endl;
    }
    void display()
    {
        if(n==0) cout<<"array has no input"<<endl;
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
    }
};

int main()
{
    arrays akon;
    while(1)
    {
        cout<<endl<<"*******menu********"<<endl;
        cout<<"1. create"<<endl;
        cout<<"2. linear"<<endl;
        cout<<"3. binary"<<endl;
        cout<<"4. display"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"\tenter your option[1-5]: ";
        int option;
        cin>>option;
        if(option==5) break;
        else
        {
            switch (option)
            {
            case 1:
            {
                akon.create();
            }
            break;
            case 2:
            {
                akon.lenear_search();
            }
            break;
            case 3:
            {
                akon.binary_Search();
            }
            break;
            case 4:
            {
                akon.display();
                break;
            }
            }
        }
    }

}
