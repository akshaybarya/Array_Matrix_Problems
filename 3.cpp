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

    int curr = 2, mx = 2, diff = a[1] - a[0];
    int j = 2;
    while (j < n)
    {
        if (diff == a[j] - a[j - 1])
        {
            curr++;
            mx = max(mx, curr);
        }
        else
        {
            curr = 2;
            diff = a[j] - a[j - 1];
        }
        j++;
    }
    cout << mx << endl;
    return 0;
}