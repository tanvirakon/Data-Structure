#include<iostream>
#include<fstream>
using namespace std;

int bx[7];
void Display(int ax[], int n)
{

    for (int i = 0; i < n; i++)
        cout << ax[i] << " ";
    cout << endl;

}
void Merge(int ax[], int l, int mid, int h)
{
    cout << "MERGE(" << "l= " << l << "," << "mid= " << mid << ",h= " << h << ") is called" << endl;
    int i, j, k;
    i = l;
    j = mid + 1;
    k = l;
// cout<<"i= "<<i<<" "<<"j= "<<j<<" k= "<<k<<endl;
//    for(int i=l;i<mid;i++) cout<<ax[i]<<" ";
//    cout<<endl;
//      for(int i=mid+1;i<h;i++) cout<<ax[i]<<" ";

    while ((i <= mid) && (j <= h)) //1st array mid prjnto, 2nd array h prjnto
    {
        if (ax[i] > ax[j])
        {
            bx[k] = ax[j];
            j++;
            k++;
        }
        else
        {
            bx[k] = ax[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
        bx[k] = ax[i];
        i++;
        k++;
    }

    while (j <= h)
    {
        bx[k] = ax[j];
        j++;
        k++;
    }
    for (i = l; i <= h; i++)
        ax[i] = bx[i];

}




void MS(int ax[], int l, int h)
{
    int mid;
    //cout<<"MS("<<"l= "<<l<<","<<"h= "<<h<<") is called"<<endl;
    if (h <= l) return;

    else
    {
        mid = (l + h) / 2;
        // cout<<"mid="<<mid<<endl;
        MS(ax, l, mid);
        MS(ax, mid + 1, h);
        Merge(ax, l, mid, h);
    }
}
int main()
{
    int ax[7] = {10, 78, 32, 90, 20, 19, 25};
    int n = 7;
    cout << "Initial unsorted array:" << endl;
    Display(ax, n);
    MS(ax, 0, n - 1);
    cout << "Initial unsorted array:" << endl;
    Display(ax, n);
}
