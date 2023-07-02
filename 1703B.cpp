#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;
        cin >> n;
        cin >> str;
        vector<int> v(26);
        int ans = 0;
        for (int i = 0; i < str.size(); i++)
        {
            int index = str[i] - 65;
            if ((v[index]) == 0)
            {
                ans = ans + 2;
                v[index]++;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}