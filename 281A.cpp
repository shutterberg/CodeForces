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
   string sl;
   ll i=0;
   getline(cin,sl);
   sl[0]=toupper(sl[0]);
   for(i=0;i<sl.size();i++){
       if(sl[i]==' ')
       sl[i+1]=toupper(sl[i+1]);
   }
  cout<<sl;
  return 0;
}