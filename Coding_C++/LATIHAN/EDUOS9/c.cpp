#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    long long p[n];
    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);

    int i = 0;     
    int j = n - 1;

    while (i <= j)
    {
        if (p[i] + p[j] <= x)
        {
            i++;
        }
        j--;    
        total++;
    }
    cout << total;
}