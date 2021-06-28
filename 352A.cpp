#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define init ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(){
    init;
   
    ull n;
    cin>>n;

    ull c5=0,c0=0;
    while(n--){
      int num;
      cin>>num;
      if(num==5) c5++;
      else if(num==0) c0++;
    }

    if(c5<9){
      cout<<((c0)? "0":"-1");
      return 0;
    }
    else if(c0!=0){
      ull count = (c5/9)*9;
      while(count--) cout<<5;
      while(c0--) cout<<0;
    }
    else cout<<"-1";
    return 0;
}
