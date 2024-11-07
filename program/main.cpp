#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int v = m - n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (j < m - v - i || j > m - i)
                cout << "🌍";
            else
                cout << "🧱";
        }
        cout << endl;
    }

    return 0;
}