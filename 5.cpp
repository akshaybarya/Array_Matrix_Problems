#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> b(n + 1, -1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (b[x] != -1)
        {
            cout << x << endl;
            return 0;
        }
        b[x] = i;
    }
    cout << "No Repeating Element" << endl;
    return 0;
}