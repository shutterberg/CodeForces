#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fori(i,a,b) for(ll i=a;i<=(ll)b;i++)
using namespace std;
int main()
{
   init;   
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.size()>10){
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
        }
        else{
            cout<<s<<"\n";
        }
    }
}