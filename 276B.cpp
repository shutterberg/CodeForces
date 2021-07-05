#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define pb push_back
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <= (ll)b; i++)
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string s;
        int a[26];
       cin>>s;
            int l=s.size();
            int i,ans;
            memset(a,0,sizeof(a));
            for(i=0;i<l;i++)
            {
                a[s[i]-'a']++;
            }
            ans=0;
            for(i=0;i<26;i++)
            {
                if(a[i]%2!=0)
                    ans++;
            }
            if(ans%2!=0||ans==0)
                printf("First\n");
            else
                printf("Second\n");
        
    


    return 0;
}