// https://codeforces.com/contest/1834/problem/A
// both two condition should be satisfy to ba a good array
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            positive++;
        }
    }
    negative = n - positive;
    int ans = 0;
    // satisfiying 1st condition
    while (negative > positive)
    {
        negative--;
        positive++;
        ans++;
    }
    // 2nd condition
    if (negative % 2 == 1)
    {
        ans++;
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}