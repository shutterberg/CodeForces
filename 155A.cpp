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
    int n, num, c = 0;
    cin >> n;
    cin >> num;
    int max = num, min = num;
    n--;
    while (n--)
    {
        cin >> num;
        if (max < num)
        {
            max = num;
            c++;
        }
        if (min > num)
        {
            min = num;
            c++;
        }
    }
    cout << c;
    return 0;

    return 0;
}