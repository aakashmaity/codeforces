#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int one = 0, zero = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'n')
        {
            one++;
        }
        if (str[i] == 'z')
        {
            zero++;
        }
    }
    for (int i = 0; i < one; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < zero; i++)
    {
        cout << 0 << " ";
    }
}