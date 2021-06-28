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
    string l,s,lv;
    cin>>s>>l;
    reverse(l.begin(),l.end());
    if(s==l) cout<<"YES"; else cout<<"NO";


    return 0;
}