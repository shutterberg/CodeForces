#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
int main()
{
   init;   
   string sl;
   ll i=0,c=0;
   getline(cin,sl);
   for(i=0;i<sl.size();i++){
       if(sl[i]=='7' or sl[i]=='4')
        c++;
       
   }
  if(c==7 | c==4)
    cout<<"YES";
else
cout<<"NO";
  return 0;
}
