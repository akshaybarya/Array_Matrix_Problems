#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    int mx = INT_MIN, mi = -1;
    for (auto it : m)
    {
        if (mx < it.second)
        {
            mi = it.first;
            mx = it.second;
        }
    }
    return mi;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    cout << solve(a, n) << endl;
    return 0;
}