#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9 + 10;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,ans=0;
        cin >> n;
        int a[n];
        int mini = inf;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mini = min(mini, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            ans+= (a[i]!=mini);
        }
        cout<<ans<<endl;
    }
}