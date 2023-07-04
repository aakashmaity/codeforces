// https://codeforces.com/problemset/problem/1607/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    t=2*t;
    while (t--)
    {
        string str;
        cin>>str;
        int time=0;

//incomplete


        for(int i=1;i<str.size();i++){
            int diff=abs(str[i-1] - str[i]);
            time+=diff;
        }






        cout<<time<<endl;
    }
}
