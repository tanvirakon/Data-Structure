#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0)

int main()
{
//selection

    // int a[7] = {1, 4, 6, 9, 2, 3, 8};
    int a[7] = {8 , 3 , 2 , 9 , 6, 4, 1};

    int index = 0;
    for (int i = 0; i < 7 - 1; i++)
    {
        int minn = 1000000;
        for (int j = i + 1; j < 7; j++)
        {
            if (minn > a[j])
            {
                minn = a[j];
                index = j;
            }
        }
        if (a[i] > a[index])   swap(a[i], a[index]);
    }

    for (auto i : a) cout << i << " ";
}
