#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        if(n==1 || n==2){
            cout<<1<<endl;
            continue;
        }
        float a=n-2;
        int roof = ceil(a/x);
        cout<<roof+1<<endl;
    }
}