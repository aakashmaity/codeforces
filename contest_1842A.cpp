// https://codeforces.com/contest/1842/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a,b,sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum1 += a;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b;
            sum2 += b;
        }
        if (sum1 > sum2)
        {
            cout << "Tsondu" << endl;
        }
        else if (sum1 < sum2)
        {
            cout << "Tenzing" << endl;
        }
        else
        {
            cout << "Draw" << endl;
        }
    }
    return 0;
}