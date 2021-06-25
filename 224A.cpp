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
    init;
    int x, y, z;
    cin >> x >> y >> z;
    int c = sqrt(z * y / x);
    int b = y / c;
    int a = x / b;
    cout << (4 * (a + b + c));

    return 0;
}