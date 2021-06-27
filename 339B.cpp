#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<(ll)b;i++)
using namespace std;
int main()
{
    init; 
    ll n,m,cval=0,pval=1,count=0;
    cin>>n>>m;
    while(m--){
        cin>>cval;
        if(cval>pval) count+=cval-pval;
        else if(cval<pval) count+=(n-pval+cval);
        pval=cval;
    }
    cout<<count;
    return 0;
}