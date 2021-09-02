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

    int cmax = a[0], days = 0;
    a.push_back(0);
    if (a[0] > a[1])
    {
        days++;
        cmax = a[1];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > cmax && a[i] > a[i + 1])
        {
            days++;
        }
        cmax = max(cmax, a[i]);
    }

    cout << days << endl;
    return 0;
}