#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for ( i = a; i <= b; i++)
#define ford(i, a, b) for ( i = a; i >= b; i--)
using namespace std;
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   int n;
    cin >> n;

    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < top; ++i)
        {
            cout << i << " ";
        }
        for (int i = top; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << "\n";
    }
    return 0;

return 0;
}