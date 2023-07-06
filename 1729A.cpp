#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int maxi=max(b,c);
        int mini=min(b,c);
        for (int i = mini+1; i <= m; i++)
        {
            a--;
        }
        if (a > c)
        {
            cout << 2 << endl;
        }
        else if (a < c)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
}