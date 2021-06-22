#include <bits/stdc++.h>
#define ull unsigned long long float
#define ll long long float
#define ss   static_cast<double>
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (int i = a; i <= (int)b; i++)
using namespace std;
int main()
{
    init; 
    float sum=0,a;
    int n;
    cin >> n;
   int arr[n];
    fori(i, 0, n - 1)
    {
        cin >> a;
        sum+=a;
    }
   
    cout<<ss(sum)/ss(n);
    return 0;
}