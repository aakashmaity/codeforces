#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(2), b(2), f(2);
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> f[0] >> f[1];
        // when A[x] == B[x]
        int ans = abs(a[1] - b[1]) + abs(a[0] - b[0]);
        if (a[0] == b[0] && a[0] == f[0])
        {
            int greater = max(a[1], b[1]);
            int lesser = min(a[1], b[1]);
            if ((f[1] > lesser) && (f[1] < greater))
            {
                ans += 2;
            }
        }
        // when A[y] == B[y]
        else if (a[1] == b[1] && a[1] == f[1])
        {
            int greater = max(a[0], b[0]);
            int lesser = min(a[0], b[0]);
            if ((f[0] > lesser) && (f[0] < greater))
            {
                ans += 2;
            }
        }
        cout << ans << endl;
    }
}