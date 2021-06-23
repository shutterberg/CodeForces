#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<(ll)b;i++)
using namespace std;
int main()
{
   init;   
   ll t=0;
   cin>>t;
   while(t--){
       int n,index;
       cin>>n;
       int a[n];
       fori(i,0,n){
           cin>>a[i];
       }
       if(a[0]!=a[1] and a[0]==a[2])
       index=2;
       else if(a[0]!=a[1] and a[1]==a[2])
       index=1;
       else{
        fori(i,2,n){
          if(a[0]!=a[i])
          index=i+1;  
        }
        }
        cout<<index<<"\n";

   }

    return 0;
}
