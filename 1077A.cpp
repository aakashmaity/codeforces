#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b >> k;
        if (abs(a - b) == 0)
        {
            if (k % 2 != 0)
            {
                cout << a << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            ll moveL = k / 2;
            ll moveR = (k - moveL);
            ll pos =(a*moveR)-(b*moveL);
            cout<<pos<<endl;
        }
    }
}