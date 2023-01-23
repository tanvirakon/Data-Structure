#include<bits/stdc++.h>
using namespace std;
//complete
int main()
{

    int a[6] = {5, 2, 4, 6, 1, 3};
    //0  1  2  3  4  5
    int j;
    for (int i = 1; i < 6; i++)
    {
        int k = a[i]; //elada variable na dile a[i] r man fixed thake na
        j = i - 1;
        while (a[j] > k && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[++j] = k;
    }
    for (int i = 0; i < 6; i++) cout << a[i] << " ";


}
