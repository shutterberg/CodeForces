#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <= (ll)b; i++)
using namespace std;
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, cv = 0,val=0;
    vector<int> a(12);
    cin >> n;
    fori(i, 0, 11) cin >> a[i];
    sort(a.rbegin(),a.rend());
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    else
    {
        for (int j = 0; j <= 11; j++)
        {
        cv+=a[j];

        if(cv>=n){
            cout<<j+1;
               return 0;
            }
        }
    }
    cout <<"-1";
    return 0;
}