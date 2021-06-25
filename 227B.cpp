#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define foria(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
int main()
{
    init; 
    map<int,int> m;
    ll n,num,s,fa=0,la=0;
    cin>>n;
    foria(i,1,n){
        cin>>num;
        m[num]=i;
    }
    cin>>s;
    foria(i,1,s){
        cin>>num;
        fa+=m[num];
        la+=n-m[num]+1;
    }
 cout<<fa<<" "<<la;
    return 0;
}