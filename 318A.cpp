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
 
    ll num,pos;
    cin>>num>>pos;
    ll mid=(num+1)/2;
    if(pos<=mid)
    cout<<(pos*2-1);
    else{
    cout<<((pos-mid)*2);}
    return 0;
}