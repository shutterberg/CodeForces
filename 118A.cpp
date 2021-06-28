#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fori(i, a, b) for (ll i = a; i <= (ll)b; i++)
using namespace std;
int main()
{
    init;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
	string s;
    cin>>s;
    for(int x=0;x<s.size();x++){
       s[x] = tolower(s[x]);
       if(s[x]=='a' ||s[x]=='o'||s[x]=='y'||s[x]=='e'||s[x]=='u'||s[x]=='i'){}else
        cout<<"."<<s[x];
    }
	return 0;
}