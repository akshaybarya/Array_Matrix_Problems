#include <bits/stdc++.h>
using namespace std;

bool matrix_search(vector<vector<int>> &a, int n, int k)
{
    int i = 0, j = n - 1;
    while (i < n && j > -1)
    {
        if (a[i][j] == k)
        {
            return true;
        }
        else if (a[i][j] > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int k;
    cin >> k;

    cout << matrix_search(a, n, k) << endl;

    return 0;
}