#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        int n=str.size();
        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        string str1=str.substr(0,(n/2));
        string str2=str.substr(n/2);
        if(str1==str2){
            cout<<"YES"<<endl;
        }
        else{ 
            cout<<"NO"<<endl;
        }
    }
    return 0;
}