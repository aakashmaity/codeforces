#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int curr1, curr2;
    int prev1 = v[0]%2;
    int prev2 = v[1]%2;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            curr1 = v[i] % 2;
            if (prev1 != curr1)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            curr2 = v[i] % 2;
            if (prev2 != curr2)
            {
                cout << "NO"<< endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}