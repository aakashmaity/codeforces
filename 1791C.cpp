#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int i = 0, j = str.size() - 1;
    int flag = 1;
    while (i <= j)
    {
        if (str[i] == str[j])
        {
            flag = 0;
            cout << j - i + 1 << endl;
            return;
        }
        i++;
        j--;
    }
    if (flag)
    {
        cout << 0 << endl;
    }
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