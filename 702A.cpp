#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int count = 1, maxi = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] < v[i])
        {
            count++;
        }
        else
        {
            maxi = max(count, maxi);
            count = 1;
        }
    }
    maxi = max(count, maxi);
    cout << maxi;
}