#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int left = 0, right = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                int dig1 = str[i] - '0';
                left += dig1;
            }
            else
            {
                int dig2 = str[i] - '0';
                right += dig2;
            }
        }
        if (left == right)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}