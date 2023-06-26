// https://codeforces.com/contest/1836/problem/A
// NOT a GOOD approach
#include <bits/stdc++.h>
using namespace std;
bool ValidPos(vector<int> v)
{
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > v[i - 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if ((n == 1) || (arr[0] != 0))
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> v;
    int front = 1;
    int back = 0;
    for (; front < n; front++)
    {
        if ((arr[front]) > (arr[front - 1] + 1))       // case when ( 0 0 2 )
        {
            cout << "NO" << endl;
            return;
        }
        if (((arr[front]) - 1) == arr[front - 1])       // case when ( 0 0 0 1 1 2)
        {
            int diff = (front - back);
            v.push_back(diff);
            back = front;
        }
    }

    int diff = (front - back);
    v.push_back(diff);

    if (ValidPos(v))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}