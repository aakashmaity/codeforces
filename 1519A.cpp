#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, b, d;
        cin >> r >> b >> d;

        if (r > b)
            swap(r,b);

        if (r*(d+1) >= b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}