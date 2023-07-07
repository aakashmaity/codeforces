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
        if (n % 7 == 0)
        {
            cout << n << endl;
            continue;
        }
        else
        {
            for (int i = 1; i <= 7; i++)
            {
                if ((n - n % 10 + i) % 7 == 0)
                {
                    int ans = n - n % 10 + i;
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
}