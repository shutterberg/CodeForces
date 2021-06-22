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
   int u=0,l=0;
   cin>>sl;
   for(auto x:sl){
       if(isupper(x))
        u++;
        else
        l++;
   }
   if(u>l)
   transform(sl.begin(), sl.end(), sl.begin(), ::toupper);
   else
   transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
   cout<<sl;
   return 0;
}