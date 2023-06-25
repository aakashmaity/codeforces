// https: // codeforces.com/problemset/problem/749/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    // if number is even
    if (n % 2 == 0)
    {
        k = n / 2;
        cout << k << endl;
        for (int i = 1; i <= k; i++)
        {
            cout << 2 << " ";
        }
    }
    else // when odd
    {
        int k = (n / 2);
        cout << k << endl;
        for (int i = 1; i <= (k - 1); i++) // total no. of 2's is k-1
        {
            cout << 2 << " ";
        }
        cout << 3;
    }
}
