#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int C(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++)
        {
            p.push_back({a[i], b[i]});
        }
        sort(p.begin(), p.end());
        int ans = k;
        for (int i = 0; i < n; i++)
        {
            if (p[i].first <= ans)
            {
                ans = ans + p[i].second;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
}