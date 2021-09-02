#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] < 'a')
        {
            str[i] += 32;
        }
    }
    cout << str << endl;
    for (int i = 0; i < n; i++)
    {
        if (str[i] > 'Z')
        {
            str[i] -= 32;
        }
    }
    cout << str << endl;
    return 0;
}