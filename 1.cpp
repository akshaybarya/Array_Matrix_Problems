#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 0, 5, 4, 6, 8};
    int n = 6, cm = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cm = max(cm, a[i]);
        cout << cm << " " << i << endl;
    }
    return 0;
}
