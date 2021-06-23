#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<(ll)b;i++)
using namespace std;
int main()
{
   init;  
   ull num;
    ordered_set<ull> n;
    fori(i,0,4){
        cin>>num;
        n.insert(num);
    }
    cout<<4-n.size();
    return 0;
}