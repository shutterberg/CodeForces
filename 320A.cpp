#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        if(n%1000==144)
        {
            n/=1000;
        }
        else if(n%100==14)
        {
            n/=100;
        }

        else if(n%10==1)
        {
            n/=10;
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
        cout<<"YES";

    return 0;
}