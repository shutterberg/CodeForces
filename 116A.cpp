#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
int main()
{
   init;  
    int in=0,n,best =0,sum=0,a,b;
    cin>>n; 
    while(n--){
        cin>>a>>b;
        in += b-a;
        best = max(in,best);
    }
    cout<<best;


    return 0;
}