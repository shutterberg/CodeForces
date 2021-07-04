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
   int n,s,a,last=0,con=0;
           cin>>n>>s;
           for (int i = 0; i < n; ++i)
    {
       cin>>a;
        if (a == last)
        {
            con += 1;
        }
        else
        {
            con = 1;
        }
        last = a;
    }
    cout<< ((con + s ) > n ? (n - con): -1);

    return 0;
}