// https://codeforces.com/problemset/problem/1607/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string keyboard, str;
        cin >> keyboard;
        cin >> str;
        int curr,prev,diff = 0;
        for(int i=0;i<26;i++){
            if(str[0]==keyboard[i]){
                prev=i+1;
                break;
            }
        }
        for (int i = 1; i < str.size(); i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (str[i] == keyboard[j])
                {
                    curr = j + 1;
                    diff += abs(curr-prev);
                    prev = curr;
                    break;
                }
            }
        }
        cout << diff << endl;
    }
}
