#include <bits/stdc++.h>
using namespace std;
bool isTriangle(long x, long y, long z)
{
    if ((x + y > z) && (x + z > y) && (y + z > x))
    {
        return true;
    }
    return false;
}
void solve()
{
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    for (long i = a; i <= b; i++)
    {
        for (long j = b; j <= c; j++)
        {
            for (long k = c; k <= d; k++)
            {
                if (isTriangle(i, j, k))
                {
                    cout << i << " " << j << " " << k << endl;
                    return;
                }
            }
        }
    }
}


// void solve(){
//     long a, b, c, d;
//     cin >> a >> b >> c >> d;
//     cout<<b<<" "<<c<<" "<<d<<endl;
//     return;
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}