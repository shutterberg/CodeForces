#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <=(ll)b; i++)
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    init;
    int k, l, m, n;
    ll d,count = 0;
    cin >> k >> l >> m >> n >> d;
    if (k == 1)
    {
        cout << d;
    }
    else
    {
        fori(i, 1, d)
        {
            if (i % k && i % l && i % m && i % n )
            {
                count++;
            }
        }
        cout <<d-count;
    }

    return 0;
}