#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string t,s;
    cin>>t;
    int i=1;
    int sequence=0;
    while(sequence<n )
    {
        s+=t[sequence];
        sequence=(i*(i+1))/2;
        i++;
    }
    cout<<endl<<s;
}