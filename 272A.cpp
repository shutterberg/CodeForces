#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
const ll mod =1e9+7;
int main()
{
    init;   
    int n, f, total(0), answer(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> f;
        total += f;
    }
    for (int i = 1; i <= 5; i++)
    {
        if ((total + i) % (n + 1) != 1)
        {
            answer += 1;
        }
    }
    cout << answer;
    return 0;
}




