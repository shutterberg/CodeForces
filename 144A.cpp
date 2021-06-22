#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <= (ll)b; i++)
using namespace std;
const ll mod = 1e9 + 7;
int main()
{
    init;
    int a, n, maxa= -1, mina = 101,ii=0,ij=0;
    cin >> n;
    int arr[n];
    fori(i, 0, n - 1)
    {
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            ii = i;
        }
        if (a <= mina)
        {
            mina = a;
            ij = i;
        }
    }
    //index of max value is ii and min value is ij
    //max value moving to first shown by ii and min to end is shown by n-ij-1 last swap not needed.
    //finally if min is in a smaller index than max at any point when they meet a swap is reduced
    cout <<ii+(n-ij-1)-(ij<ii?1:0);
    return 0;
}