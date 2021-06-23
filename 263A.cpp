#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i=0,n=5,j=0,x,li=0,lj=0,step=0;
    fori(i,1,n) fori(j,1,n) cin>>x; if(x==1) { step=abs(li-3)+abs(lj-3);;};
    cout<<step;
    return 0;
}
