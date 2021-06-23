    #include <bits/stdc++.h>
    #define ull unsigned long long
    using namespace std;
     
    int main() {
    	ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
    	cout.tie(NULL);
        string s,num;
        cin>>s;
        for(int i=0;i<s.size();)
        {   
        if(s[i]=='-' && s[i+1]=='-'){
                num+='2';
                i+=2;
        }
        else if(s[i]=='-' && s[i+1]=='.'){
           num+='1';
                i+=2;
        }
        else {
            num+='0';
            i++;
        }
        }
        cout<<num;
    	return 0;
    }
