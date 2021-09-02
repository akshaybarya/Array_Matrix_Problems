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

    sort(a.begin(), a.end());

    int start = 0, end = n - 1;

    while (start < end)
    {
        if (a[start] + a[end] < k)
        {
            start++;
        }
        else if (a[start] + a[end] == k)
        {
            cout << start + 1 << " " << end + 1 << endl;
            start++;
            end++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}