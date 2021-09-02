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

    int k;
    cin >> k;

    int start = 0, end = 0, csum = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        csum += a[i];
        end = i;
        while (csum > k && start < end)
        {
            csum -= a[start];
            start++;
        }
        if (csum == k)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}