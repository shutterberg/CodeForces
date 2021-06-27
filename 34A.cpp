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
        int i,j,k;
        int n,diff=2000;
        int index1,index2;

        cin>>n;

        int h[n];

        for(i=0;i<n;i++)
            cin>>h[i];

        for(i=0;i<n-1;i++)
        {
                if(abs(h[i+1]-h[i])<diff)
                {
                    diff=abs(h[i+1]-h[i]);
                    index1=i;
                    index2=i+1;
                }
        }

        if(abs(h[0]-h[n-1])<diff)
                {
                    diff=abs(h[0]-h[n-1]);
                    index1=0;
                    index2=n-1;
                }


        cout<<index1+1<<" "<<index2+1;

        return 0;
}