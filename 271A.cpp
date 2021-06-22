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
   int iy1;
   string y1;
   cin>>y1;
   do{
       iy1=stoi(y1);
       iy1++;
       y1=to_string(iy1);
   }while(y1[0]==y1[1]||y1[2]==y1[0]||y1[3]==y1[0]||y1[1]==y1[2]||y1[1]==y1[3]||y1[2]==y1[3]);

cout<<iy1;



    return 0;
}