#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int C(int n, int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
        }
        int a = C(10 - n, 2);
        int b = C(4, 2);
        cout << a * b << endl;
    }
}