#include <bits/stdc++.h>
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    init;
    int n, m;
    cin >> n >> m;
    bool flag = true;
    for (int i = n + 1; i <= m; i++)
    {
        flag = true;
        for (int j = 2; j*j <= i; j++)
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        if (flag && i == m)
        {
            cout << "YES";
            return 0;
        }
        else if (flag)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
