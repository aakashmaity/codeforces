// https://codeforces.com/contest/1836/problem/A
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n],freq[101],maximum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maximum=max(maximum,arr[i]);
        freq[arr[i]]++;
    }
    for(int i=1;i<=maximum;i++){
        if(freq[i]>freq[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
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