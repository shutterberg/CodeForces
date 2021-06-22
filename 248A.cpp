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
    int n, l, r, bothOpen = 0, leftOpen = 0, rightOpen = 0, bothClose = 0;
    cin >> n;
    fori(i, 1, n)
    {
        cin >> l >> r;
        if (l == 0 and r == 0)
            bothOpen++;
        else if (l == 1 and r == 1)
            bothClose++;
        else if (l == 0 and r == 1)
            leftOpen++;
        else if (l == 1 and r == 0)
            rightOpen++;
            
    }
    if ((bothOpen + bothClose) > (leftOpen + rightOpen))
        cout << (leftOpen + rightOpen + 2 * min(bothOpen, bothClose));
    else{
        if(leftOpen == rightOpen)
        cout << 2*rightOpen ;
        else if (leftOpen>rightOpen)
        cout << (bothClose + bothOpen) +2*rightOpen ;
        else
        cout <<(bothClose + bothOpen)+2*leftOpen ;
        }
    return 0;
}