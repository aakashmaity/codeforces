#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int Digits = log10(m) + 1;
        int k = pow(10, Digits - 1);
        cout << (m - k) << endl;
    }
}