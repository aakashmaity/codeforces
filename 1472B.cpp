#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int flag = 2;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            if (a != 2)
            {
                flag = 1;
            }
        }
        if (n % 2 != 0 && flag == 2)
        {
            cout << "NO" << endl;
        }
        else if (sum % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}