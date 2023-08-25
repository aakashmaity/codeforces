int n;
cin >> n;
vector<int> A[n];
map<int, int> freq;
for (int i = 1; i <= n; i++)
{
    int a;
    cin >> a;
    freq[a]++;
}
int winner = -1;
for (int i = 1; i <= n; i++)
{
    if ((freq[A[i]] == 1) && (A[i] < A[winner]))
        winner = i;
}

if (winner < 0)
{
    cout << winner << endl;
}
else
{
    cout << winner + 1 << endl;
}