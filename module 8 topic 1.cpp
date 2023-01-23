#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *ll;
    node *rl;
};

node *ax[50]; //ax address rakhbe , node type structure r address


int32_t main()
{
    ifstream file("mytext.txt");
    int ll[50];
    int rl[50];
    int data[50];
    int i=0;
    while(file>>ll[i])  //file r data gulo normal array te rakhlam
    {
        file>>data[i];
        file>>rl[i]; //egula just plain text
        i++;
    }
    int n=i; //jekoyta data ase

    for(i=0; i<n; i++)
        cout<<ll[i]<<" "<<char(data[i])<<" "<<rl[i]<<endl; //just file r data gulo show krlm

    for(int i=0; i<n; i++) ax[i]=new node(); //ax address r array te kyekta address store krlm, ram e jerkm serial ase, serkm
    cout<<endl;
    for(int i=0; i<n; i++)
        cout<<"node"<<" "<<char(data[i])<<" "<<ax[i]<<endl; //ekn ei address gula diyei eder define kra hbe
    cout<<endl;


    for(int i=0; i<n; i++)
    {
        ax[i]->data=data[i]; //ax r data part e node gular name
        ax[i]->ll=ax[ll[i]-1]; //ax adress array r serial onusare ax[ll] e save krlm, amr array 0 based ,tai 1 biyog kra hlo
        ax[i]->rl=ax[rl[i]-1];
    }

    cout<<"my tree:"<<endl;
    for(int i=0; i<n; i++)
        cout<<ax[i]->ll<<" "<<char(ax[i]->data)<<" "<<ax[i]->rl<<endl;



}
