#include<bits/stdc++.h>
using namespace std;
//complete

int ack(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if((m > 0) && (n == 0))
    {
        return ack(m - 1, 1);
    }
    else if((m > 0) && (n > 0))
    {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main()
{

    int A;
    int a,b;
    cin>>a>>b;
    A = ack(a,b);
    cout << A << endl;


}

