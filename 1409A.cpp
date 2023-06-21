#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        int ans= diff/10;
        int rem = diff%10;
        if(rem){
            ans++;        //123.3 -> 123+1 -> 124
        }
        cout<<ans;
    }
    return 0;
}           