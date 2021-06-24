#include<bits/stdc++.h>
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    int n, x[210], y[210], ans=0;
    bool a, b, c, d;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x[i]>>y[i]; }
    for(int i=0; i<n; i++){

        a=0, b=0, c=0, d=0;
        for(int j=0; j<n; j++){
            if(x[i]>x[j] && y[i]==y[j]) a=1;
            if(x[i]<x[j] && y[i]==y[j]) b=1;
            if(x[i]==x[j] && y[i]<y[j]) c=1;
            if(x[i]==x[j] && y[i]>y[j]) d=1;
        }
        if(a && b && c && d) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
