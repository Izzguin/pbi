#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    int cnt4 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == 1)
        {
            cnt1++;
        }
        else if (s[i] == 2)
        {
            cnt2++;
        }
        else if (s[i] == 3)
        {
            cnt3++;
        }
        else
        {
            cnt4++;
        }
    }
    int taxi = cnt4;
    int pair1_3 = min(cnt3, cnt1);
    taxi += pair1_3;
    cnt3 -= pair1_3;
    cnt1 -= pair1_3;
    taxi += cnt3;
    taxi += cnt2 / 2;
    cnt2 %= 2;
    if (cnt2 > 0)
    {
        taxi++;
        cnt1 -= min(2, cnt1);
    }
    taxi += (cnt1 + 3) / 4;
    cout << taxi << '\n';
}
