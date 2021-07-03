#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for ( i = a; i < b; i++)
#define ford(i, a, b) for ( i = a; i >= b; i--)
using namespace std;
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   ull s,n,i,v1,v2;
   vector <pair <ull,ull>> a;
    cin >>s>> n;
fori(i,0,n){
    v1=0;v2=0;
    cin>>v1>>v2;
    a.push_back(make_pair(v1,v2));
}
sort(a.begin(),a.end());
fori(i,0,n){
    if(s<=a[i].first){
        cout<<"NO";
        return 0;
    }
    else{
        s+=a[i].second;}
}
cout<<"YES";
return 0;
}