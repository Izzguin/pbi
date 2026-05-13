#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<pair<int, int>> tempat;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        while (!tempat.empty() && x <= tempat.top().first)
        {
            tempat.pop();
        }
        if (tempat.empty())
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << tempat.top().second + 1 << '\n';
        }
        tempat.push({x, i});
    }
}
