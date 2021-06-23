#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<(ll)b;i++)
using namespace std;
int main()
{
   init;  
    string s;
    cin>>s;
    set<char> n;
    fori(i,0,s.size()){
        n.insert(s[i]);
    }
    if(n.size()%2)
    cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}