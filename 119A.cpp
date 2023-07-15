#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int flag = 1;
    while (n > 0)
    {
        if (flag == 1)
        {
            n = n - gcd(a, n);
            flag = 0;
        }
        else
        {
            n = n - gcd(b, n);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
}
