#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
   init;   
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout <<"-1"<<"\n";
    }
    else
    {
        for(int i = 1; i < n; i += 2)
        {
            cout<< i + 1 << " " << i<<" ";
        }
        cout<<"\n";
    }
 return 0;
}

