#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int x = k, y = 100 - k;
        int gcd = __gcd(x, y);
        cout << 100 / gcd << endl;
    }
}