#include<bits/stdc++.h>
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    init; 
    int n=0,a,b,c,num=0; 
    cin>>n; 
    while(n--){
        cin>>a>>b>>c;
        if((a+b+c)>=2) num++;
    }
cout<<num;
    return 0;
}