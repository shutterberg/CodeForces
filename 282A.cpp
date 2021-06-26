#include<bits/stdc++.h>
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    init; 
    int n=0,temp=0;
    string s; 
    cin>>n; 
    while(n--){
        cin>>s;
        if(s[1]=='+')
        ++temp;
        else 
        --temp;
    }
cout<<temp;
    return 0;
}