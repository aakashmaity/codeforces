#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for (int i = 3; i <= n; i++)
    {
        if ((arr[1] + arr[2]) <= arr[i])
        {
            cout << 1 << " " << 2 << " " << i << endl;
            return;
        }
    }
    cout<<-1<<endl;
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