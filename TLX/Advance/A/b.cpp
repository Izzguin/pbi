#include <bits/stdc++.h>
using namespace std;

void operasi(vector<vector<int>> &a, int &n, int &m, string s)
{
    if (s == "90")
    {
        vector <vector<int>> temp = a; // buat vector sementara yang berisi vector a
        a.assign(m, vector<int>(n));   // mengatur ukuran a
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = temp[n - 1 - j][i]; // i untuk ans adalah baris, tapi, untuk matrix dia tidak berganti baris tapi kolom.
            }
        }
        swap(n, m); // mengubah panjang dan lebar dari matrix, jika awalnya n = 3 dan m = 4, maka setelah rotasi 90 derajat hasilnya jadi n = 4 dan m = 3;
    }
    else if (s == "180")
    {
        vector<vector<int>> temp = a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j] = temp[n - 1 - i][m - 1 - j];
            }
        }
    }
    else if (s == "270")
    {
        vector <vector<int>> temp = a; // buat vector sementara yang berisi vector a
        a.assign(m, vector<int>(n));   // mengatur ukuran a
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = temp[j][m - i - 1];
            }
        }
        swap(n, m);
    }
    else if (s == "_")
    {
        vector<vector<int>> temp = a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j] = temp[n - 1 - i][j];
            }
        }
    }
    else if (s == "|")
    {
        vector<vector<int>> temp = a;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                a[i][j] = temp[i][m - 1 - j];
            }
        }
    }
}

int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        operasi(matrix, n, m, s);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}