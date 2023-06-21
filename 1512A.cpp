#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (flag == 1)
            {
                if ((arr[i] != arr[i + 1]) && (arr[i] != arr[i + 2]))
                {
                    cout << i + 1 << endl;
                    break;
                }
                flag++;
            }
            else if (flag == (n - 1))
            {
                if ((arr[i - 1] != arr[i]) && (arr[i] != arr[i - 2]))
                {
                    cout << i + 1 << endl;
                    break;
                }
                flag++;
            }
            else
            {
                if ((arr[i - 1] != arr[i]) && (arr[i] != arr[i + 1]))
                {
                    cout << i + 1 << endl;
                    break;
                }
                flag++;
            }
        }
    }
    return 0;
}

// flag - denotes number is present at position of
// 1 -> for first position
// (n-1) -> for last position
// others -> middle position