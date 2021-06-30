#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
const ll mod =1e9+7;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    init;   
    int n,m,count=0;
    cin>>n>>m;
    int minv =min(n,m);
    fori(i,0,minv)
        fori(j,0,minv)
            if(i*i+j==n && i+j*j==m) 
                count++;
    cout<<count;
    return 0;
}