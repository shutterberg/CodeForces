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
    int n,k,l,c,d,p,nl,np,a=0;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     a=(min((k*l)/nl,c*d));
    cout<<(min(a,(p/np))/n);


    return 0;
}