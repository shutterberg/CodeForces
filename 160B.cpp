#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <= (ll)b; i++)
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    string s, l, r;
    cin >> n >> s;
    l = s.substr(0, n);
    r = s.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    bool strictly_less(true), strictly_more(true);
    for (int i = 0; i < n; ++i)
    {
        if (l[i] >= r[i])
        {
            strictly_less = false;
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (l[i] <= r[i])
        {
            strictly_more = false;
            break;
        }
    }
    cout << ((strictly_less || strictly_more) ? "YES" : "NO") << endl;
    return 0;
}