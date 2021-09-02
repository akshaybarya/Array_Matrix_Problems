#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> &a, int n)
{
    int sum = 0, mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        mx = max(mx, sum);

        if (sum < 0)
        {
            sum = 0;
        }
    }

    return mx;
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
    int case1 = kadane(a, n);
    int tsum = 0;
    for (int i = 0; i < n; i++)
    {
        tsum += a[i];
        a[i] = 0 - a[i];
    }

    int case2 = tsum + kadane(a, n);

    cout << max(case1, case2) << endl;
    return 0;
}