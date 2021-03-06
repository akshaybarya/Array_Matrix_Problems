#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

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

    cout << mx << endl;
    return 0;
}