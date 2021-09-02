#include <bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>> &a, int n)
{
    int row = 0;
    int col = 0;
    int maxRow = n, maxCol = n;

    while (row < maxRow && col < maxCol)
    {
        for (int i = col; i < maxCol; i++)
        {
            cout << a[row][i] << " ";
        }
        row++;
        for (int i = row; i < maxRow; i++)
        {
            cout << a[i][maxCol - 1] << " ";
        }
        maxCol--;
        for (int i = maxCol - 1; i >= col; i--)
        {
            cout << a[maxRow - 1][i] << " ";
        }
        maxRow--;
        for (int i = maxRow - 1; i >= row; i--)
        {
            cout << a[i][col] << " ";
        }
        col++;
    }
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

    spiral(a, n);

    return 0;
}