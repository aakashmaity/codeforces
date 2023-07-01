#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int maximum = max(a, max(b, c));
        n = n - abs(a - maximum);
        n = n - abs(b - maximum);
        n = n - abs(c - maximum);
        if (n % 3 == 0 && n >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}