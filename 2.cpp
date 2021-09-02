#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 2};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        int csum = 0;
        for (int j = i; j < n; j++)
        {
            csum += a[j];
            cout << csum << endl;
        }
    }
    return 0;
}
