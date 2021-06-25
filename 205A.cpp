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
    ull num,n,min=ULLONG_MAX,index;
    int flag=0;
    cin>>n;
    fori(i,1,n){
        cin>>num;
        if(num<min){
            min=num;
            index=i;
            flag=0;
        }else if(num==min){
            flag=1;
        }

    }
    if(flag){
        cout<< "Still Rozdil";
    }else{
        cout<<index;
    }

    return 0;
}