#include <bits/stdc++.h>
using namespace std;

void Move(int n, char src, char dest, char aux)
{
if (n > 1)
{
Move(n-1, src, aux, dest);
Move(1, src, dest, aux);
Move(n-1, aux, dest, src);
}
else
cout << "Move the top disk from "<< src << " to " << dest << endl;
}

int main()
{
    int N = 3;
    Move(N, 'A', 'C', 'B');
    return 0;
}
