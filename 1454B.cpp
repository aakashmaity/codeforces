#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> freq(n + 1), idx(n + 1);
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            ++freq[x];
            idx[x] = i + 1;
        }
        for(int i=0;i<=n;i++){
            cout<<freq[i]<<" ";
        }
        cout<<endl;
        for (int i = 0; i <= n; i++)
        {
            cout << idx[i] << " ";
        }
        cout<<endl;
        int ans = -1;
        for (int i = 0; i <= n; ++i)
        {
            if (freq[i] == 1)
            {
                ans = idx[i];
                break;
            }
        }
        cout << ans << endl;
    }
}