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
    string a,b;
    char m,n;
    cin>>a>>b;
    for(int i=0;i<a.size();i++){
        m=(toupper(a[i]));
        n=(toupper(b[i]));
        if(m>n){
            cout<<"1";
            return 0;
        }else if(m<n){
            cout<<"-1";
            return 0;
        }

    }
    cout<<"0";
    return 0;
}