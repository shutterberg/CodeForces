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
    int np, nh, minc = 0, maxc = 0,i, j, s,t;
    int a[1001], b[1001];
    cin >> nh >> np;
    fori(i, 0, np - 1)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + np);
    sort(b, b + np, cmp);
    s=nh;
    t=nh;
    for (i = 0; i < np; i++)
    {
        while (a[i] > 0 && s > 0)
        {
            minc += a[i];
            a[i]--;
            s--;
        }
    }
    while (t > 0)
    {
        for (i = 0; i < np && t > 0; i++)
        {
            if (b[i] > 0 && b[i] > b[i - 1])
            {
                maxc += b[i];
                b[i]--;
                t--;
            }
        }
    }
    cout << maxc << " " << minc;
    return 0;
}