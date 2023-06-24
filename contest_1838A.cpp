// https://codeforces.com/contest/1838/problem/A
// Blackboard List
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort(v.begin(),v.end());
    // when atlease one element is -ve
    if(v[0]<0){
        cout<<v[0]<<endl;
    }
    // when both elements are positive ,  max(a,b) > |a=b| , 1 2 3 4 5 6  so we never derive this array without greatest value
    else{
        cout<<v[n-1]<<endl;
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