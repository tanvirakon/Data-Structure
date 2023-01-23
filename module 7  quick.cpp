//Quick Sort
#include<iostream>
#include<fstream>
using namespace std;


void Display(int ax[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << " " << ax[i];
    cout << endl;

}

int partitionn(int ax[], int lb, int ub)
{
    int pivot = ax[lb];
    int start = lb;
    int endd = ub;
    while (start < endd)
    {
        while (ax[start] <= pivot) start++;
        while (ax[endd] > pivot) endd--;
        if (start < endd) swap(ax[start], ax[endd]);

    }
    swap(ax[endd], ax[lb]);
    return endd;



}

void Quick_Sort(int ax[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partitionn(ax, lb, ub);
        Quick_Sort(ax, lb, loc - 1);
        Quick_Sort(ax, loc + 1, ub);
    }

}

int main()
{
    int ax[7] = {10, 78, 32, 90, 20, 19, 25};
    int n = 7;
    cout << "Initial unsorted array:" << endl;
    Display(ax, n);
    Quick_Sort(ax, 0, n - 1);
    cout << "sorted array:" << endl;
    Display(ax, n);

}
