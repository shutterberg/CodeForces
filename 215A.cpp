#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    int n, m, a[50], b, max(0), count(1);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
        cin >> b;
        for (int j = 0; j < n; ++j)
        {
            if (b % a[j] == 0)
            {
                int x = b / a[j];
                if (x > max)
                {
                    max = x;
                    count = 1;
                }
                else if (x == max)
                {
                    count += 1;
                }
                break;
            }
        }
    }
    cout << count;
    return 0;
}