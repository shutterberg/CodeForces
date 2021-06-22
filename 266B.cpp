    #include <bits/stdc++.h>
    #define ull unsigned long long
    using namespace std;
     
    int main() {
    	ios_base::sync_with_stdio(false);
        cin.tie(NULL); 
        cout.tie(NULL);
    	int n,c;
    	string s;
    	cin>>n>>c;
    	cin>>s;
    	
    	for(int i=0;i<c;i++){
    	    for(int j=0;j<n-1;j++){
    	        if(s[j]=='B'&&s[j+1]=='G'){
    	            swap(s[j],s[j+1]);
    	            j++;
    	        }
    	    }
    	}
    	cout<<s;
    	return 0;
    }