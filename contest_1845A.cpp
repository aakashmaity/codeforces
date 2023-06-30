// https://codeforces.com/contest/1845/problem/A
// https://codeforces.com/contest/1842/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (k == n && n != x)
        {
            cout << "YES" << endl;
            cout << 1 << " " << n << endl;
        }
        else if (k == 1 && n == k)
        {
            cout << "NO" << endl;
        }
        else if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            if (n % 2 == 0 )
            {
                int quo1 = n / 2;
                cout << "YES" << endl;
                cout << quo1 << endl;
                for (int i = 1; i <= quo1; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                int quo2 = n / 2;
                int rem = n % 2;
                cout << "YES" << endl;
                cout << quo2 << endl;
                for (int i = 1; i <= (quo2 - 1); i++)
                {
                    cout << 2 << " ";
                }
                cout << (rem + 2) << endl;
            }
        }
    }
    return 0;
}