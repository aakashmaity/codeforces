#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    if (n == 1)
    {
        if (arr[0] > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }
    if ((arr[n - 1] - arr[n - 2]) > 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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