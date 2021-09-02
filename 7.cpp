#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> b(n + 1, false);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < 0)
            continue;
        b[x] = true;
    }

    for (int i = 0; i <= n; i++)
    {
        if (!b[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}