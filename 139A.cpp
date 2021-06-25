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
    int n,a[7],sum=0,pg=0;
    cin>>n;
    fori(i,0,6){cin>>a[i];  sum+=a[i];}
    n%=sum;
    if(n==0){n=sum;}
        fori(i,0,6)
        {
            pg+=a[i];
            if(n<=pg){
                cout<<i+1;
                return 0;
            }
        }

    return 0;
}