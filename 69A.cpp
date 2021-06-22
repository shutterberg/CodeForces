#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
const ll mod =1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a=0,b=0,c=0,n;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
   if(a||b||c) cout<<"NO";
   else cout<<"YES";
    return 0;
}