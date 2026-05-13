#include <bits/stdc++.h>
using namespace std;

char S[5][5];

bool jalan(int y, int x)
{
    if (y >= 5 || x >= 5 || S[y][x] == 'X')
        return false;

    if (S[y][x] == 'B')
    {
        return true;
    }
    return jalan(y, x + 1) || jalan(y + 1, x);
}

int main()
{
    // input
    int Ay;
    int Ax;
    int By;
    int Bx;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> S[i][j];
        }
    }
    // identifikasi A dan B ada dimana
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (S[i][j] == 'A')
            {
                Ay = i;
                Ax = j;
            }
            if (S[i][j] == 'B')
            {
                By = i;
                Bx = j;
            }
        }
    }
    if (jalan(Ay, Ax) == true)
    {
        cout << (By - Ay) + (Bx - Ax) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
